/*
 * Author: Henry Liang
 * Created Date: 12/6/2020
 * Last Update: 12/9/2020
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "genllvm.h"

llvm::llvm(void)
{
}
llvm::~llvm(void)
{
}

enum error_code{
    ERROR_llvm_CONST_EXPR = 255, ERROR_llvm_FUNC_DEF
};

int llvm::genllvm(char* argv[], ast* ast_root)
{
    if(argv[1] != NULL)
    {
        printf("; ModuleID = '%s'\n", argv[1]);
        printf("source_filename = \"%s\"\n\n", argv[1]);
    }
    else
    {
        printf("; ModuleID = 'llvmIn.c'\n");
        printf("source_filename = \"llvmIn.c\"\n\n");
    }

    ast* cruiser = ast_root;
    while(cruiser != NULL)
    {
        if(strcmp(cruiser->node_type, "COMP_UNIT") == 0)
        {
            //question remain: initializing data are not in good format.
            if(strcmp(cruiser->right->node_type, "CONST_DECL") == 0)
                llvm::CONST_DECL_G(cruiser->right);
            else if(strcmp(cruiser->right->node_type, "VAR_DECL") == 0)
                llvm::VAR_DECL_G(cruiser->right);
            else if(strcmp(cruiser->right->node_type, "FUNC_DEF") == 0)
                llvm::FUNC_DEF(cruiser->right);
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

int llvm::CONST_DECL_G(ast* pointer)
{
    llvm::CONST_DEF_G(pointer->right);
    if(pointer->next != NULL)
        llvm::CONST_DECL_G(pointer->next);
    return 0;
}

int llvm::CONST_DEF_G(ast* pointer)
{
    printf("@");
    printf("%s", pointer->value_string);

    printf(" = dso_local constant ");

    int flag = 0;
    if(pointer->left != NULL)
        llvm::CONST_DEF_A_G(pointer->left, &flag);

    llvm::CONST_INIT_G(pointer->right);
    if(flag > 1)
        printf(", align 16\n");
    else printf(", align 4\n");
    return 0;
}

//const int a = 1;
//@a = dso_local constant i32 1, align 4
//const int a[3] = {1,2,3};
//@a = dso_local constant [3 x i32] [i32 1, i32 2, i32 3], align 4
//const int a[3][2] = {1,2,3,4,5,6};
//@a = dso_local constant [3 x [2 x i32]] [[2 x i32] [i32 1, i32 2], [2 x i32] [i32 3, i32 4], [2 x i32] [i32 5, i32 6]], align 16

int llvm::CONST_DEF_A_G(ast* pointer, int *flag)
{
    (*flag)++;
    printf("[%d * ", llvm::CONST_EXPR(pointer->right));

    if(pointer->next == NULL)
        printf("i32]");
    else
    {
        llvm::CONST_DEF_A_G(pointer->next, flag);
        printf("]");
    }

    return 0;
}

int llvm::CONST_INIT_G(ast* pointer)
{
    if(strcmp(pointer->value_string, "{}") == 0)
    {
        printf(" [");
        if(pointer->right != NULL)
        {
            llvm::CONST_INIT_G(pointer->right);
            if(pointer->next != NULL)
            {
                llvm::CONST_INIT_A_G(pointer->next);
            }
        }
        printf("]");
    }

    else printf("i32 %d", llvm::CONST_EXPR(pointer->next));
    return 0;
}

int llvm::CONST_INIT_A_G(ast* pointer)
{
    printf(", ");
    llvm::CONST_INIT_G(pointer->right);
    if(pointer->next != NULL)
    {
        llvm::CONST_INIT_A_G(pointer->next);
    }

    return 0;
}

int llvm::CONST_EXPR(ast* pointer)
{
    if(strcmp(pointer->node_type, "DECIMAL") == 0)
        return pointer->value_int;
    else if(strcmp(pointer->node_type, "EXPR") == 0)
    {
        switch(pointer->value_int) {
            case '+':
                return llvm::CONST_EXPR(pointer->left) + llvm::CONST_EXPR(pointer->right);
            case '-':
                return llvm::CONST_EXPR(pointer->left) - llvm::CONST_EXPR(pointer->right);
            case '*':
                return llvm::CONST_EXPR(pointer->left) * llvm::CONST_EXPR(pointer->right);
            case '/':
                return llvm::CONST_EXPR(pointer->left) / llvm::CONST_EXPR(pointer->right);
            case '%':
                return llvm::CONST_EXPR(pointer->left) % llvm::CONST_EXPR(pointer->right);
        }
    }
    else if(strcmp(pointer->node_type, "EXP_WITH_UNARY_OP") == 0)
    {
        switch(pointer->left->value_int) {
            case '+':
                return llvm::CONST_EXPR(pointer->right);
            case '-':
                return -llvm::CONST_EXPR(pointer->right);
            case '!':
                {
                    if (llvm::CONST_EXPR(pointer->right) == 0)
                        return 1;
                    else return 0;
                }
        }
    }
    return ERROR_llvm_CONST_EXPR;
}

int llvm::VAR_DECL_G(ast* pointer)
{
    llvm::VAR_DEF_G(pointer->right);
    if(pointer->next != NULL)
        llvm::VAR_DECL_G(pointer->next);
    return 0;
}

int llvm::VAR_DEF_G(ast* pointer)
{
    printf("@");
    printf("%s", pointer->value_string);

    printf(" = dso_local global ");

    int flag = 0;
    if(pointer->left != NULL)
        llvm::VarDef_A_G(pointer->left, &flag);

    llvm::INIT_VAR_G(pointer->right);

    if(flag > 1)
        printf(", align 16\n");
    else printf(", align 4\n");
    return 0;
}

int llvm::VarDef_A_G(ast* pointer, int* flag)
{
    (*flag)++;
    printf("[%d * ", llvm::CONST_EXPR(pointer->right));

    if(pointer->next == NULL)
        printf("i32]");
    else
    {
        llvm::VarDef_A_G(pointer->next, flag);
        printf("]");
    }

    return 0;
}

int llvm::INIT_VAR_G(ast* pointer)
{
    if(strcmp(pointer->value_string, "{}") == 0)
    {
        printf(" [");
        if(pointer->right != NULL)
        {
            llvm::INIT_VAR_G(pointer->right);
            if(pointer->next != NULL)
            {
                llvm::INIT_VAR_A_G(pointer->next);
            }
        }
        printf("]");
    }

    else printf("i32 %d", llvm::CONST_EXPR(pointer->right));
    return 0;
}

int llvm::INIT_VAR_A_G(ast* pointer)
{
    printf(", ");
    llvm::INIT_VAR_G(pointer->right);
    if(pointer->next != NULL)
    {
        llvm::INIT_VAR_A_G(pointer->next);
    }
    return 0;
}

int llvm::EXPR(ast* pointer)
{

    return 0;
}

int llvm::FUNC_DEF(ast* pointer)
{
    printf("\n; Function Attrs: noinline nounwind optnone uwtable\n");
    printf("define dso_local ");
    if(strcmp(pointer->value_string,"int")==0)
        printf("i32 ");
    else if((strcmp(pointer->value_string,"void")==0))
        printf("void ");
    else return ERROR_llvm_FUNC_DEF;

    int num=0;//variable number
    if(pointer->left == NULL)
        printf("@%s() #0 {\n", pointer->value_string1);
    else
    {
        printf("@%s(", pointer->value_string1);
        llvm::FuncFParams(pointer->left,&num);
        printf(") #0 {\n");

        //alloca and store parameters in the beginning of a function.
        int count = num;
        num+=2;
        for(int i=0;i<=count;i++,num++)
            printf("  %%%d = alloca i32, align 4\n",num);
        for(int i=0;i<=count;i++)
            printf("  store i32 %%%d, i32* %%%d, align 4\n",i,count+i+2);
    }
    llvm::Block(pointer->right, &num);

    if((strcmp(pointer->value_string,"void")==0))
        printf("  ret void\n}\n");
    return 0;
}

int llvm::FuncFParams(ast* pointer, int* num)
{
    FuncFParam(pointer->right, num);

    if(pointer->next!=NULL)
    {
        (*num)++;
        FuncFParams(pointer->next, num);
    }

    return 0;
}

int llvm::FuncFParam(ast* pointer, int* num)
{
    if(*num>0)
        printf(", ");
    if(pointer->left == NULL)
    {
        printf("i32 %%%d", *num);
    }
    else
    {
        if(pointer->left->next == NULL)
        {
            printf("i32* %%%d", *num);
        }
        else
        {
            llvm::FuncFParam_A(pointer->left->next);
            printf("* %%%d", *num);
        }
    }
    return 0;
}

int llvm::FuncFParam_A(ast* pointer)
{
    printf("[%d * ", llvm::CONST_EXPR(pointer->right));
    if(pointer->next == NULL)
    {
        printf("i32]");
    }
    else
    {
        llvm::FuncFParam_A(pointer->next);
        printf("]");
    }
}

int llvm::Block(ast* pointer, int* num)
{
    if(pointer->right == NULL)
    {
        printf("  ret void\n}\n");
    }
    else llvm::Block_A(pointer->right, num);
    return 0;
}

int llvm::Block_A(ast* pointer, int* num)
{
    llvm::BlockItem(pointer->right, num);
    if(pointer->next != NULL)
        llvm::Block_A(pointer->next, num);
    return 0;
}

int llvm::BlockItem(ast* pointer, int* num)
{
    if(strcmp(pointer->node_type,"STMT")==0)
        llvm::Stmt(pointer, num);
    else if(strcmp(pointer->node_type,"CONST_DECL")==0)
        llvm::CONST_DECL(pointer, num);
    else if(strcmp(pointer->node_type,"VAR_DECL")==0)
        llvm::VAR_DECL(pointer, num);
    return 0;
}

int llvm::Stmt(ast* pointer, int* num)
{

    return 0;
}

int llvm::CONST_DECL(ast* pointer, int* num)
{
    llvm::CONST_DEF(pointer->right,num);
    if(pointer->next!=NULL)
        llvm::CONST_DECL(pointer->next,num);
    return 0;
}

int llvm::CONST_DEF(ast* pointer, int* num)
{
    if(pointer->left == NULL)//not array define
    {
        printf("  %%%d = alloca i32, align 4\n",*num);
        llvm::CONST_INIT(pointer->right,num);
    }

    else//array define
    {

    }
    return 0;
}

int llvm::CONST_INIT(ast* pointer, int* num)
{
    if(strcmp(pointer->value_string,"")==0) {
        printf("  store i32 %d, i32* %%%d, align 4\n", llvm::CONST_EXPR(pointer->next), *num);
        (*num)++;
    }
    else if(pointer->right == NULL)
        return 0;
    else if(pointer->next == NULL)
        llvm::CONST_INIT(pointer->right,num);
    else
    {
        llvm::CONST_INIT(pointer->right,num);
        llvm::ConstInitVal_A(pointer->next,num);
    }
    return 0;
}

int llvm::ConstInitVal_A(ast* pointer, int* num)
{
    llvm::CONST_INIT(pointer->right,num);
    if(pointer->next != NULL)
        llvm::ConstInitVal_A(pointer->next,num);

    return 0;
}

int llvm::VAR_DECL(ast* pointer, int* num)
{
    llvm::VAR_DEF(pointer->right,num);
    if(pointer->next!=NULL)
        llvm::VAR_DECL(pointer->next,num);
    return 0;
}

int llvm::VAR_DEF(ast* pointer, int* num)
{
    if(pointer->left == NULL)//not array define
    {
        if(pointer->right != NULL)//has initialization
        {
            printf("  %%%d = alloca i32, align 4\n",*num);
            llvm::INIT(pointer->right,num);
        }
        else
        {
            printf("  %%%d = alloca i32, align 4\n",*num);
            (*num)++;
        }
    }

    else//array define
    {

    }
    return 0;
}

int llvm::INIT(ast* pointer, int* num)
{
    if(strcmp(pointer->value_string,"")==0) {
        printf("  store i32 %d, i32* %%%d, align 4\n", llvm::EXPR(pointer->next), *num);
        (*num)++;
    }
    else if(pointer->right == NULL)
        return 0;
    else if(pointer->next == NULL)
        llvm::INIT(pointer->right,num);
    else
    {
        llvm::INIT(pointer->right,num);
        llvm::InitVal_A(pointer->next,num);
    }
    return 0;
}

int llvm::InitVal_A(ast* pointer, int* num)
{
    llvm::INIT(pointer->right,num);
    if(pointer->next != NULL)
        llvm::InitVal_A(pointer->next,num);

    return 0;
}