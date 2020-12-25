/*
 * Author: Henry Liang
 * Created Date: 12/6/2020
 * Last Update: 12/9/2020
 */

#include <cstdio>
#include <string>
#include <string.h>
#include <iostream>
#include <fstream>
#include "genllvm.h"
#include <vector>
#include <map>
using namespace std;

//#define DEBUG_SCOUT
std::map<std::string,int> id_global;
std::map<std::string,int> id_local;
int scout;

enum error_code{
    ERROR_llvm_CONST_EXPR = 255
};

int genllvm(ast* root)
{
    ast* cruiser = root;
    while(cruiser != NULL)
    {
        if(strcmp(cruiser->node_type, "COMP_UNIT") == 0)
        {
            if(strcmp(cruiser->right->node_type, "CONST_DECL") == 0)
                GCD::CONST_DECL(cruiser->right);
            else if(strcmp(cruiser->right->node_type, "VAR_DECL") == 0)
                GVD::VAR_DECL(cruiser->right);
            else if(strcmp(cruiser->right->node_type, "FUNC_DEF") == 0)
                GFD::FUNC_DEF(cruiser->right);
        }
        else
        {
            std::cout<<"DO NOT DETECT COMP_UNIT\n";
            exit(0);
        }
        cruiser = cruiser->next;
    }
    return 0;
}

int GCD::CONST_DECL(ast* pointer)
{
    GCD::CONST_DEF(pointer->right);
    if(pointer->next!=NULL)
        GCD::CONST_DECL(pointer->next);
    return 0;
}

int GCD::CONST_DEF(ast* pointer)
{
    int value = GCD::CONST_EXPR(pointer->right->right);
    std::cout<<"@"<<pointer->value_string<<" = dso_local constant i32 "<<value<<", align 4\n";
    std::string temp = pointer->value_string;
    id_global.insert(std::pair<std::string, int>(temp, value));
    return 0;
}

int GCD::CONST_EXPR(ast* pointer)
{
    if(strcmp(pointer->node_type, "DECIMAL") == 0)
        return pointer->value_int;
    else if(strcmp(pointer->node_type, "EXPR") == 0
            || strcmp(pointer->node_type, "EXPR_MUL") == 0)
    {
        switch(pointer->value_int) {
            case '+':
                return GCD::CONST_EXPR(pointer->left) + GCD::CONST_EXPR(pointer->right);
            case '-':
                return GCD::CONST_EXPR(pointer->left) - GCD::CONST_EXPR(pointer->right);
            case '*':
                return GCD::CONST_EXPR(pointer->left) * GCD::CONST_EXPR(pointer->right);
            case '/':
                return GCD::CONST_EXPR(pointer->left) / GCD::CONST_EXPR(pointer->right);
            case '%':
                return GCD::CONST_EXPR(pointer->left) % GCD::CONST_EXPR(pointer->right);
        }
    }
    else if(strcmp(pointer->node_type, "EXP_WITH_UNARY_OP") == 0)
    {
        switch(pointer->left->value_int) {
            case '+':
                return GCD::CONST_EXPR(pointer->right);
            case '-':
                return -GCD::CONST_EXPR(pointer->right);
            case '!':
            {
                if (GCD::CONST_EXPR(pointer->right) == 0)
                    return 1;
                else return 0;
            }
        }
    }
    return ERROR_llvm_CONST_EXPR;
}

int GVD::VAR_DECL(ast* pointer)
{
    GVD::VAR_DEF(pointer->right);
    if(pointer->next!=NULL)
        GVD::VAR_DECL(pointer->next);
    return 0;
}

int GVD::VAR_DEF(ast* pointer)
{
    if(pointer->right == NULL)
    {
        std::cout<<"@"<<pointer->value_string<<" = common dso_local global i32 0, align 4\n";
        std::string temp = pointer->value_string;
        id_global.insert(std::pair<std::string, int>(temp, 0));
    }
    else
    {
        int value = GVD::AddExp(pointer->right->right);
        std::cout<<"@"<<pointer->value_string<<" = dso_local global i32 "<<value<<", align 4\n";
        std::string temp = pointer->value_string;
        id_global.insert(std::pair<std::string, int>(temp, value));
    }
    return 0;
}

int GVD::AddExp(ast* pointer)
{
    if(strcmp(pointer->node_type, "EXPR") == 0)
    {
        if(pointer->value_int == '+')
            return GVD::AddExp(pointer->left)+GVD::MulExp(pointer->right);
        else if(pointer->value_int == '-')
            return GVD::AddExp(pointer->left)-GVD::MulExp(pointer->right);
    }
    else
        return GVD::MulExp(pointer);
}

int GVD::MulExp(ast* pointer)
{
    if(strcmp(pointer->node_type, "EXPR_MUL") == 0)
    {
        if(pointer->value_int == '*')
            return GVD::MulExp(pointer->left)*GVD::UnaryExp(pointer->right);
        else if(pointer->value_int == '/')
            return GVD::MulExp(pointer->left)/GVD::UnaryExp(pointer->right);
        else if(pointer->value_int == '%')
            return GVD::MulExp(pointer->left)%GVD::UnaryExp(pointer->right);
    }
    else
        return GVD::UnaryExp(pointer);
}

int GVD::UnaryExp(ast* pointer)
{
    if(strcmp(pointer->node_type, "EXP_WITH_UNARY_OP") == 0)
    {
        switch(pointer->left->value_int) {
            case '+':
                return GVD::UnaryExp(pointer->right);
            case '-':
                return -GVD::UnaryExp(pointer->right);
            case '!':
            {
                if (GVD::UnaryExp(pointer->right) == 0)
                    return 1;
                else return 0;
            }
        }
    }

    else if(strcmp(pointer->node_type, "FUNC_CALL_ID") == 0)
    {
        std::cout<<"error: initializer element is not a compile-time constant\n";
        exit(-1);
    }

    else
    {
        if(strcmp(pointer->node_type, "EXPR") == 0)
            return GVD::AddExp(pointer);
        else if(strcmp(pointer->node_type, "IDENTIFIER") == 0)
        {
            std::string temp = pointer->value_string;
            std::map<std::string,int>::iterator iter;
            iter = id_global.find(temp);
            if(iter != id_global.end())
                return iter->second;
            else
            {
                std::cout<<"error: initializer element is not a compile-time constant\n";
                exit(-1);
            }
        }
        else if(strcmp(pointer->node_type, "DECIMAL") == 0)
            return pointer->value_int;
    }
}

int GFD::FUNC_DEF(ast* pointer)
{
    std::cout<<"\n; Function Attrs: noinline nounwind optnone uwtable\n";
    if(strcmp(pointer->value_string,"int")==0)
        std::cout<<"define dso_local i32 @"<<pointer->value_string1<<"(";
    else if((strcmp(pointer->value_string,"void")==0))
        std::cout<<"define dso_local void @"<<pointer->value_string1<<"(";

    id_local.clear();
    int num = 0;
    if(pointer->left != NULL)
        GFD::FuncFParams(pointer->left,&num);

    std::map<std::string,int>::iterator iter;
    for(iter = id_local.begin(); iter != id_local.end(); iter++)
        iter->second = iter->second+num+1;
    scout = num*2+1;
    FS::func_scout(pointer->right);
    std::cout<<") #0 {\n";

#ifdef DEBUG_SCOUT
    for(iter = id_local.begin(); iter != id_local.end(); iter++)
        std::cout<<iter->first<<" "<<iter->second<<std::endl;
    std::cout<<"id_local.size(): "<<id_local.size()<<std::endl;
    std::cout<<"scout: "<<scout<<std::endl;
#endif

    int count = num;
    for(int i=0;i<id_local.size();i++)
        std::cout<<"  %"<<++count<<" = alloca i32, align 4\n";
    count = num;
    for(int i=0;i<num;i++)
        std::cout<<"  store i32 %"<<i<<", i32* %"<<++count<<", align 4\n";

    GFD::Block(pointer->right);

    if((strcmp(pointer->value_string,"void")==0))
        std::cout<<"  ret void\n}\n";
    else std::cout<<"}"<<std::endl<<std::endl;
    return 0;
}

int GFD::FuncFParams(ast* pointer, int* num)
{
    GFD::FuncFParam(pointer->right, num);
    (*num)++;
    if(pointer->next!=NULL)
        GFD::FuncFParams(pointer->next, num);
    return 0;
}

int GFD::FuncFParam(ast* pointer, int* num)
{
    if(*num>0)
        std::cout<<", ";
    if(pointer->left == NULL)
    {
        std::cout<<"i32 %"<<*num;
        std::string temp = pointer->value_string1;
        id_local.insert(std::pair<std::string, int>(temp, *num));
    }
    else
    {
        //array...
    }
    return 0;
}

int FS::func_scout(ast* pointer)
{
    if(pointer->right!=NULL)
        FS::block_a_scout(pointer->right);
    return 0;
}

int FS::block_a_scout(ast* pointer)
{
    FS::blockitem_scout(pointer->right);
    if(pointer->next!=NULL)
        FS::block_a_scout(pointer->next);
    return 0;
}

int FS::blockitem_scout(ast* pointer)
{
    if(strcmp(pointer->node_type, "CONST_DECL") == 0)
        FS::CONST_DECL(pointer);
    else if(strcmp(pointer->node_type, "VAR_DECL") == 0)
        FS::VAR_DECL(pointer);
    else return 0;
}

int FS::CONST_DECL(ast* pointer)
{
    FS::CONST_DEF(pointer->right);
    if(pointer->next!=NULL)
        FS::CONST_DECL(pointer->next);
    return 0;
}

int FS::CONST_DEF(ast* pointer)
{
    std::string temp = pointer->value_string;
    id_local.insert(std::pair<std::string, int>(temp, scout++));
    return 0;
}

int FS::VAR_DECL(ast* pointer)
{
    FS::VAR_DEF(pointer->right);
    if(pointer->next!=NULL)
        FS::VAR_DECL(pointer->next);
    return 0;
}

int FS::VAR_DEF(ast* pointer)
{
    std::string temp = pointer->value_string;
    id_local.insert(std::pair<std::string, int>(temp, scout++));
    return 0;
}

int GFD::Block(ast* pointer)
{
    if(pointer->right != NULL)
        Block_A(pointer->right);
    return 0;
}

int GFD::Block_A(ast* pointer)
{
    GFD::BlockItem(pointer->right);
    if(pointer->next!=NULL)
        GFD::Block_A(pointer->next);
    return 0;
}

int GFD::BlockItem(ast* pointer)
{
    if(strcmp(pointer->node_type, "CONST_DECL") == 0)
        GFD::CONST_DECL(pointer);
    else if(strcmp(pointer->node_type, "VAR_DECL") == 0)
        GFD::VAR_DECL(pointer);
    else if(strcmp(pointer->node_type, "STMT") == 0)
        GFD::STMT(pointer);
}

int GFD::CONST_DECL(ast* pointer)
{
    GFD::CONST_DEF(pointer->right);
    if(pointer->next!=NULL)
        GFD::CONST_DECL(pointer->next);
    return 0;
}

int GFD::CONST_DEF(ast* pointer)
{
    if(pointer->left==NULL)
    {
        auto iter = id_local.find(pointer->value_string);
        std::cout<<"  store i32 "<<GFD::CONST_EXPR(pointer->right->right)
            <<", i32* %"<<iter->second<<", align 4"<<std::endl;
    }
    else
    {
        //array
    }
    return 0;
}

int GFD::CONST_EXPR(ast* pointer)
{
    if(strcmp(pointer->node_type, "DECIMAL") == 0)
        return pointer->value_int;
    else if(strcmp(pointer->node_type, "EXPR") == 0
            || strcmp(pointer->node_type, "EXPR_MUL") == 0)
    {
        switch(pointer->value_int) {
            case '+':
                return GFD::CONST_EXPR(pointer->left) + GFD::CONST_EXPR(pointer->right);
            case '-':
                return GFD::CONST_EXPR(pointer->left) - GFD::CONST_EXPR(pointer->right);
            case '*':
                return GFD::CONST_EXPR(pointer->left) * GFD::CONST_EXPR(pointer->right);
            case '/':
                return GFD::CONST_EXPR(pointer->left) / GFD::CONST_EXPR(pointer->right);
            case '%':
                return GFD::CONST_EXPR(pointer->left) % GFD::CONST_EXPR(pointer->right);
        }
    }
    else if(strcmp(pointer->node_type, "EXP_WITH_UNARY_OP") == 0)
    {
        switch(pointer->left->value_int) {
            case '+':
                return GFD::CONST_EXPR(pointer->right);
            case '-':
                return -GFD::CONST_EXPR(pointer->right);
            case '!':
            {
                if (GFD::CONST_EXPR(pointer->right) == 0)
                    return 1;
                else return 0;
            }
        }
    }
    return ERROR_llvm_CONST_EXPR;
}

int GFD::VAR_DECL(ast* pointer)
{
    GFD::VAR_DEF(pointer->right);
    if(pointer->next!=NULL)
        GFD::VAR_DECL(pointer->next);
    return 0;
}

int GFD::VAR_DEF(ast* pointer)
{
    if(pointer->left == NULL && pointer->right!=NULL)
    {
        //non array and has initializer, cause you should do nothing here if there is no initializer.
        std::string temp = pointer->value_string;
        auto iter = id_local.find(temp);
        FVD::AddExp(pointer->right->right, iter->second);
    }
    else
    {
        //array
    }
    return 0;
}

int FVD::AddExp(ast* pointer, int id_num)
{
    //if(only const in experession)
    if(strcmp(pointer->node_type, "EXPR") == 0)
    {
        if(pointer->value_int == '+')
            return FVD::AddExp(pointer->left,id_num)+FVD::MulExp(pointer->right,id_num);
        else if(pointer->value_int == '-')
            return FVD::AddExp(pointer->left,id_num)-FVD::MulExp(pointer->right,id_num);
    }
    else
        return FVD::MulExp(pointer,id_num);

    //else if(at least one variable or call of function in expression)

}

int FVD::MulExp(ast* pointer, int id_num)
{
    if(strcmp(pointer->node_type, "EXPR_MUL") == 0)
    {
        if(pointer->value_int == '*')
            return FVD::MulExp(pointer->left,id_num)*FVD::UnaryExp(pointer->right,id_num);
        else if(pointer->value_int == '/')
            return FVD::MulExp(pointer->left,id_num)/FVD::UnaryExp(pointer->right,id_num);
        else if(pointer->value_int == '%')
            return FVD::MulExp(pointer->left,id_num)%FVD::UnaryExp(pointer->right,id_num);
    }
    else
        return FVD::UnaryExp(pointer,id_num);
}

int FVD::UnaryExp(ast* pointer, int id_num)
{
    if(strcmp(pointer->node_type, "EXP_WITH_UNARY_OP") == 0)
    {
        switch(pointer->left->value_int) {
            case '+':
                return FVD::UnaryExp(pointer->right,id_num);
            case '-':
                return -FVD::UnaryExp(pointer->right,id_num);
            case '!':
            {
                if (FVD::UnaryExp(pointer->right,id_num) == 0)
                    return 1;
                else return 0;
            }
        }
    }

    else if(strcmp(pointer->node_type, "FUNC_CALL_ID") == 0)
    {
        ;
    }

    else
    {
        if(strcmp(pointer->node_type, "EXPR") == 0)
            return FVD::AddExp(pointer,id_num);
        else if(strcmp(pointer->node_type, "IDENTIFIER") == 0)
        {
            std::string temp = pointer->value_string;
            auto iter = id_global.find(temp);
            if(iter != id_global.end())
            {
                std::cout<<"  %"<<scout<<" = load i32, i32* @"<<temp<<", align 4"<<std::endl;
                std::cout<<"  store i32 %"<<scout++<<", i32* %"<<id_num<<", align 4\n";
            }
            else
            {
                iter = id_local.find(temp);
                if(iter != id_local.end())
                {
                    std::cout<<"  %"<<scout<<" = load i32, i32* %"<<iter->second<<", align 4\n";
                    std::cout<<"  store i32 %"<<scout++<<", i32* %"<<id_num<<", align 4\n";
                }
                else std::cout<<"wrong initialing identifier."<<std::endl;
            }
        }
        else if(strcmp(pointer->node_type, "DECIMAL") == 0)
            std::cout<<"  store i32 "<<pointer->value_int<<", i32* %"<<id_num<<", align 4\n";
        //wrong here
    }
}

int GFD::STMT(ast* pointer)
{
    if(strcmp(pointer->value_string,"return")==0)
        RST::AddExp(pointer->left);

    return 0;
}

int RST::AddExp(ast* pointer)
{
    //if(only const in experession)
    if(strcmp(pointer->node_type, "EXPR") == 0)
    {
        if(pointer->value_int == '+')
            return RST::AddExp(pointer->left)+RST::MulExp(pointer->right);
        else if(pointer->value_int == '-')
            return RST::AddExp(pointer->left)-RST::MulExp(pointer->right);
    }
    else
        return RST::MulExp(pointer);

    //else if(at least one variable or call of function in expression)

}

int RST::MulExp(ast* pointer)
{
    if(strcmp(pointer->node_type, "EXPR_MUL") == 0)
    {
        if(pointer->value_int == '*')
            return RST::MulExp(pointer->left)*RST::UnaryExp(pointer->right);
        else if(pointer->value_int == '/')
            return RST::MulExp(pointer->left)/RST::UnaryExp(pointer->right);
        else if(pointer->value_int == '%')
            return RST::MulExp(pointer->left)%RST::UnaryExp(pointer->right);
    }
    else
        return RST::UnaryExp(pointer);
}

int RST::UnaryExp(ast* pointer)
{
    if(strcmp(pointer->node_type, "EXP_WITH_UNARY_OP") == 0)
    {
        switch(pointer->left->value_int) {
            case '+':
                return RST::UnaryExp(pointer->right);
            case '-':
                return -RST::UnaryExp(pointer->right);
            case '!':
            {
                if (RST::UnaryExp(pointer->right) == 0)
                    return 1;
                else return 0;
            }
        }
    }

    else if(strcmp(pointer->node_type, "FUNC_CALL_ID") == 0)
    {
        ;
    }

    else
    {
        if(strcmp(pointer->node_type, "EXPR") == 0)
            return RST::AddExp(pointer);
        else if(strcmp(pointer->node_type, "IDENTIFIER") == 0)
        {
            std::string temp = pointer->value_string;
            auto iter = id_global.find(temp);
            if(iter != id_global.end())
            {
                std::cout<<"  %"<<scout<<" = load i32, i32* @"<<temp<<", align 4"<<std::endl;
                std::cout<<"  ret i32 "<<scout++<<"\n";
            }
            else
            {
                iter = id_local.find(temp);
                if(iter != id_local.end())
                {
                    std::cout<<"  %"<<scout<<" = load i32, i32* %"<<iter->second<<", align 4\n";
                    std::cout<<"  ret i32 "<<scout++<<"\n";
                }
                else std::cout<<"wrong initialing identifier."<<std::endl;
            }
        }
        else if(strcmp(pointer->node_type, "DECIMAL") == 0)
            std::cout<<"  ret i32 "<<pointer->value_int<<"\n";
    }
}