/*
 * Author: Henry Liang
 * Created Date: 12/6/2020
 * Last Update: 12/9/2020
 */

#include <cstdio>
#include <string>
#include <string.h>
#include <iostream>
#include "genllvm.h"
#include <vector>
#include <map>
std::map<std::string,int> id_global;
std::map<std::string,int> id_local;
int scout;

enum error_code{
    ERROR_llvm_CONST_EXPR = 255
};

namespace llvm
{
    int genllvm(ast* root)
    {
        ast* cruiser = root;
        while(cruiser != NULL)
        {
            if(strcmp(cruiser->node_type, "COMP_UNIT") == 0)
            {
                if(strcmp(cruiser->right->node_type, "CONST_DECL") == 0)
                    CONST_DECL(cruiser->right,'G');
                else if(strcmp(cruiser->right->node_type, "VAR_DECL") == 0)
                    VAR_DECL(cruiser->right,'G');
                else if(strcmp(cruiser->right->node_type, "FUNC_DEF") == 0)
                    FUNC_DEF(cruiser->right);
            }
            else
            {
                printf("DO NOT DETECT COMP_UNIT");
                exit(0);
            }
            cruiser = cruiser->next;
        }
        return 0;
    }

    int CONST_DECL(ast* pointer, char mode)
    {
        if(mode == 'G')
        {
            CONST_DEF(pointer->right,'G');
            if(pointer->next!=NULL)
                CONST_DECL(pointer->next,'G');
            return 0;
        }
        else if(mode == 'S')
        {
            CONST_DEF(pointer->right,'S');
            if(pointer->next!=NULL)
                CONST_DECL(pointer->next,'S');
            return 0;
        }
        else if(mode == 'F')
        {
            CONST_DEF(pointer->right,'F');
            if(pointer->next!=NULL)
                CONST_DECL(pointer->next,'F');
            return 0;
        }
    }

    int CONST_DEF(ast* pointer, char mode)
    {
        if(mode == 'G')
        {
            int value = CONST_EXPR(pointer->right->next);
            printf("@%s = dso_local constant i32 %d, align 4\n"
                    , pointer->value_string, value);
            std::string temp = pointer->value_string;
            id_global.insert(std::pair<std::string, int>(temp, value));
            return 0;
        }
        else if(mode == 'S')
        {
            std::string temp = pointer->value_string;
            id_local.insert(std::pair<std::string, int>(temp, scout++));
            return 0;
        }
        else if(mode == 'F')
        {
            std::string temp = pointer->value_string;
            std::map<std::string,int>::iterator iter;
            iter = id_local.find(temp);
            printf("  store i32 %d, i32* %%%d, align 4\n"
                   ,CONST_EXPR(pointer->right->next),iter->second);
            return 0;
        }
    }

    int CONST_EXPR(ast* pointer)
    {
        if(strcmp(pointer->node_type, "DECIMAL") == 0)
            return pointer->value_int;
        else if(strcmp(pointer->node_type, "EXPR") == 0
        || strcmp(pointer->node_type, "EXPR_MUL") == 0)
        {
            switch(pointer->value_int) {
                case '+':
                    return CONST_EXPR(pointer->left) + CONST_EXPR(pointer->right);
                case '-':
                    return CONST_EXPR(pointer->left) - CONST_EXPR(pointer->right);
                case '*':
                    return CONST_EXPR(pointer->left) * CONST_EXPR(pointer->right);
                case '/':
                    return CONST_EXPR(pointer->left) / CONST_EXPR(pointer->right);
                case '%':
                    return CONST_EXPR(pointer->left) % CONST_EXPR(pointer->right);
            }
        }
        else if(strcmp(pointer->node_type, "EXP_WITH_UNARY_OP") == 0)
        {
            switch(pointer->left->value_int) {
                case '+':
                    return CONST_EXPR(pointer->right);
                case '-':
                    return -CONST_EXPR(pointer->right);
                case '!':
                {
                    if (CONST_EXPR(pointer->right) == 0)
                        return 1;
                    else return 0;
                }
            }
        }
        return ERROR_llvm_CONST_EXPR;
    }

    int VAR_DECL(ast* pointer, char mode)
    {
        if(mode == 'G')
        {
            VAR_DEF(pointer->right,'G');
            if(pointer->next!=NULL)
                VAR_DECL(pointer->next,'G');
            return 0;
        }
        else if(mode == 'S')
        {
            VAR_DEF(pointer->right,'S');
            if(pointer->next!=NULL)
                VAR_DECL(pointer->next,'S');
            return 0;
        }
        else if(mode == 'F')
        {
            VAR_DEF(pointer->right,'F');
            if(pointer->next!=NULL)
                VAR_DECL(pointer->next,'F');
            return 0;
        }
    }

    int VAR_DEF(ast* pointer, char mode)
    {
        if(mode == 'G')
        {
            if(pointer->right == NULL)
            {
                printf("@%s = common dso_local global i32 0, align 4\n",
                       pointer->value_string);
                std::string temp = pointer->value_string;
                id_global.insert(std::pair<std::string, int>(temp, 0));
            }
            else
            {
                int value = AddExp(pointer->right->right,'G');
                printf("@%s = dso_local global i32 %d, align 4\n",
                       pointer->value_string, value);
                std::string temp = pointer->value_string;
                id_global.insert(std::pair<std::string, int>(temp, value));
            }
            return 0;
        }
        else if(mode == 'S')
        {
            if(pointer->right == NULL)
            {
                std::string temp = pointer->value_string;
                id_local.insert(std::pair<std::string, int>(temp, scout++));
            }
            else
            {
                std::string temp = pointer->value_string;
                id_local.insert(std::pair<std::string, int>(temp, scout++));
            }
            return 0;
        }
        else if(mode == 'F')
        {
            if(pointer->right != NULL)
                AddExp(pointer->right,'F');
            return 0;
        }
    }

    int AddExp(ast* pointer, char mode)
    {
        if(mode == 'G')
        {
            if(strcmp(pointer->node_type, "EXPR") == 0)
            {
                if(pointer->value_int == '+')
                    return AddExp(pointer->left,'G')+MulExp(pointer->right,'G');
                else if(pointer->value_int == '-')
                    return AddExp(pointer->left,'G')-MulExp(pointer->right,'G');
            }
            else
                return MulExp(pointer,'G');
        }
        else if(mode == 'F')
        {
            if(strcmp(pointer->node_type, "EXPR") == 0)
            {
                if(pointer->value_int == '+')
                    return AddExp(pointer->left,'F')+MulExp(pointer->right,'F');
                else if(pointer->value_int == '-')
                    return AddExp(pointer->left,'F')-MulExp(pointer->right,'F');
            }
            else
                return MulExp(pointer,'F');
        }
    }

    int MulExp(ast* pointer, char mode)
    {
        if(mode == 'G')
        {
            if(strcmp(pointer->node_type, "EXPR_MUL") == 0)
            {
                if(pointer->value_int == '*')
                    return MulExp(pointer->left,'G')*UnaryExp(pointer->right,'G');
                else if(pointer->value_int == '/')
                    return MulExp(pointer->left,'G')/UnaryExp(pointer->right,'G');
                else if(pointer->value_int == '%')
                    return MulExp(pointer->left,'G')%UnaryExp(pointer->right,'G');
            }
            else
                return UnaryExp(pointer,'G');
        }
        else if(mode == 'F')
        {
            if(strcmp(pointer->node_type, "EXPR_MUL") == 0)
            {
                if(pointer->value_int == '*')
                    return MulExp(pointer->left,'F')*UnaryExp(pointer->right,'F');
                else if(pointer->value_int == '/')
                    return MulExp(pointer->left,'F')/UnaryExp(pointer->right,'F');
                else if(pointer->value_int == '%')
                    return MulExp(pointer->left,'F')%UnaryExp(pointer->right,'F');
            }
            else
                return UnaryExp(pointer,'F');
        }
    }

    int UnaryExp(ast* pointer, char mode)
    {
        if(mode == 'G')
        {
            if(strcmp(pointer->node_type, "EXP_WITH_UNARY_OP") == 0)
            {
                switch(pointer->left->value_int) {
                    case '+':
                        return UnaryExp(pointer->right,'G');
                    case '-':
                        return -UnaryExp(pointer->right,'G');
                    case '!':
                    {
                        if (UnaryExp(pointer->right,'G') == 0)
                            return 1;
                        else return 0;
                    }
                }
            }

            else if(strcmp(pointer->node_type, "FUNC_CALL_ID") == 0)
            {
                printf("error: initializer element is not a compile-time constant\n");
                exit(-1);
            }

            else
            {
                if(strcmp(pointer->node_type, "EXPR") == 0)
                    return AddExp(pointer,'G');
                else if(strcmp(pointer->node_type, "IDENTIFIER") == 0)
                {
                    std::string temp = pointer->value_string;
                    std::map<std::string,int>::iterator iter;
                    iter = id_global.find(temp);
                    if(iter != id_global.end())
                        return iter->second;
                    else
                    {
                        printf("error: initializer element is not a compile-time constant\n");
                        exit(-1);
                    }
                }
                else if(strcmp(pointer->node_type, "DECIMAL") == 0)
                    return pointer->value_int;
            }
        }

   //******************************************************************************//

        else if(mode == 'F')
        {
            if(strcmp(pointer->node_type, "EXP_WITH_UNARY_OP") == 0)
            {
                switch(pointer->left->value_int) {
                    case '+':
                        return UnaryExp(pointer->right,'F');
                    case '-':
                        return -UnaryExp(pointer->right,'F');
                    case '!':
                    {
                        if (UnaryExp(pointer->right,'F') == 0)
                            return 1;
                        else return 0;
                    }
                }
            }

            std::cout<<"\n\n\nI am here!!\n\n\n";
            else if(strcmp(pointer->node_type, "FUNC_CALL_ID") == 0)
            {
                printf("  %%%d = call i32 @%s("
                        ,scout,pointer->value_string);
                if(pointer->right!=NULL)
                    FuncRParams(pointer->right);
                printf(")\n");
            }

            else
            {
                ;
            }
        }
    }

    int FuncRParams(ast* pointer)
    {
        std::cout<<"i32 "<<AddExp(pointer->right,'F');
        if(pointer->next != NULL)
        {
            std::cout<<", ";
            FuncRParams(pointer->next);
        }
        return 0;
    }

    int FUNC_DEF(ast* pointer)
    {
        id_local.clear();
        scout=0;
        if(pointer->left != NULL)
            para_scout(pointer->left);
        std::map<std::string,int>::iterator iter;
        for(iter = id_local.begin(); iter != id_local.end(); iter++)
            iter->second = iter->second+scout+1;
        scout = scout*2+1;
        func_scout(pointer->right);

        printf("\n; Function Attrs: noinline nounwind optnone uwtable\n");
        if(strcmp(pointer->value_string,"int")==0)
            printf("define dso_local i32 @%s(",pointer->value_string1);
        else if((strcmp(pointer->value_string,"void")==0))
            printf("define dso_local void @%s(",pointer->value_string1);

        int num = 0;
        if(pointer->left != NULL)
            FuncFParams(pointer->left,&num);

        printf(") #0 {\n");
        int count = num;
        for(int i=0;i<id_local.size();i++)
            printf("  %%%d = alloca i32, align 4\n",++count);
        count = num;
        for(int i=0;i<num;i++)
            printf("  store i32 %%%d, i32* %%%d, align 4\n",i,++count);

        Block(pointer->right);

        if((strcmp(pointer->value_string,"void")==0))
            printf("  ret void\n}\n");
        return 0;
    }

    int FuncFParams(ast* pointer, int* num)
    {
        FuncFParam(pointer->right, num);
        (*num)++;
        if(pointer->next!=NULL)
            FuncFParams(pointer->next, num);
        return 0;
    }

    int para_scout(ast* pointer)
    {
        para_scout1(pointer->right);
        if(pointer->next!=NULL)
            para_scout(pointer->next);
        return 0;
    }

    int para_scout1(ast* pointer)
    {
        if(pointer->left == NULL)
        {
            std::string temp = pointer->value_string1;
            id_local.insert(std::pair<std::string, int>(temp, scout++));
        }
        return 0;
    }

    int FuncFParam(ast* pointer, int* num)
    {
        if(*num>0)
            printf(", ");
        if(pointer->left == NULL)
        {
            printf("i32 %%%d", *num);
            std::string temp = pointer->value_string1;
            id_global.insert(std::pair<std::string, int>(temp, 0));
        }

        else
        {
        }
        return 0;
    }

    int func_scout(ast* pointer)
    {
        if(pointer->right==NULL)
            return 0;
        else
        {
            block_a_scout(pointer->right);
            return 0;
        }
    }

    int block_a_scout(ast* pointer)
    {
        blockitem_scout(pointer->right);
        if(pointer->next!=NULL)
            block_a_scout(pointer->next);
        return 0;
    }

    int blockitem_scout(ast* pointer)
    {
        if(strcmp(pointer->node_type, "CONST_DECL") == 0)
            CONST_DECL(pointer,'S');
        else if(strcmp(pointer->node_type, "VAR_DECL") == 0)
            VAR_DECL(pointer,'S');
        else return 0;
    }

    int Block(ast* pointer)
    {
        if(pointer->right == NULL)
            return 0;
        else
            Block_A(pointer->right);
        return 0;
    }

    int Block_A(ast* pointer)
    {
        BlockItem(pointer->right);
        if(pointer->next!=NULL)
            Block_A(pointer->next);
        return 0;
    }

    int STMT(ast* pointer)
    {
        return 0;
    }

    int BlockItem(ast* pointer)
    {
        if(strcmp(pointer->node_type, "CONST_DECL") == 0)
            CONST_DECL(pointer,'F');
        else if(strcmp(pointer->node_type, "VAR_DECL") == 0)
            VAR_DECL(pointer,'F');
        else if(strcmp(pointer->node_type, "STMT") == 0)
            STMT(pointer);
    }
}