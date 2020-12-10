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
                llvm::CONST_DECL(cruiser->right);
            //else if(strcmp(cruiser->right->node_type, "VAR_DECL") == 0)
               // llvm::VAR_DECL(cruiser->right);
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

int llvm::CONST_DECL(ast* pointer)
{
    llvm::CONST_DEF(pointer->right);
    if(pointer->next != NULL)
        llvm::CONST_DECL(pointer->next);
    return 0;
}

int llvm::CONST_DEF(ast* pointer)
{
    printf("@");
    printf("%s", pointer->value_string);

    printf(" = dso_local constant ");

    int flag = 0;
    if(pointer->left != NULL)
        llvm::CONST_DEF_A(pointer->left, &flag);

    llvm::CONST_INIT(pointer->right);
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

int llvm::CONST_DEF_A(ast* pointer, int *flag)
{
    (*flag)++;
    printf("[%d * ", llvm::CONST_EXPR(pointer->right));

    if(pointer->next == NULL)
        printf("i32]");
    else
    {
        llvm::CONST_DEF_A(pointer->next, flag);
        printf("]");
    }

    return 0;
}

int llvm::CONST_INIT(ast* pointer)
{
    if(strcmp(pointer->value_string, "{}") == 0)
    {
        printf(" [");
        if(pointer->right != NULL)
        {
            llvm::CONST_INIT(pointer->right);
            if(pointer->next != NULL)
            {
                llvm::CONST_INIT_A(pointer->next);
            }
        }
        printf("]");
    }

    else printf("i32 %d", llvm::CONST_EXPR(pointer->next));
    return 0;
}

int llvm::CONST_INIT_A(ast* pointer)
{
    printf(", ");
    llvm::CONST_INIT(pointer->right);
    if(pointer->next != NULL)
    {
        llvm::CONST_INIT_A(pointer->next);
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

int llvm::VAR_DECL(ast* pointer)
{
    llvm::VAR_DEF(pointer->right);
    if(pointer->next != NULL)
        llvm::VAR_DECL(pointer->next);
    return 0;
}

int llvm::VAR_DEF(ast* pointer)
{
    printf("@");
    printf("%s", pointer->value_string);

    printf(" = dso_local global ");

    int flag = 0;
    if(pointer->left != NULL)
        llvm::VarDef_A(pointer->left, &flag);

    llvm::INIT_VAR(pointer->right);

    if(flag > 1)
        printf(", align 16\n");
    else printf(", align 4\n");
    return 0;
}

int llvm::VarDef_A(ast* pointer, int* flag)
{
    (*flag)++;
    printf("[%d * ", llvm::CONST_EXPR(pointer->right));

    if(pointer->next == NULL)
        printf("i32]");
    else
    {
        llvm::VarDef_A(pointer->next, flag);
        printf("]");
    }

    return 0;
}

int llvm::INIT_VAR(ast* pointer)
{
    if(strcmp(pointer->value_string, "{}") == 0)
    {
        printf(" [");
        if(pointer->right != NULL)
        {
            llvm::INIT_VAR(pointer->right);
            if(pointer->next != NULL)
            {
                llvm::INIT_VAR_A(pointer->next);
            }
        }
        printf("]");
    }

    else printf("i32 %d", llvm::CONST_EXPR(pointer->right));
    return 0;
}

int llvm::INIT_VAR_A(ast* pointer)
{
    printf(", ");
    llvm::INIT_VAR(pointer->right);
    if(pointer->next != NULL)
    {
        llvm::INIT_VAR_A(pointer->next);
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

    if(pointer->left == NULL)
        printf("@%s() #0 {\n", pointer->value_string1);
    else llvm::FuncFParams(pointer->left);


    return 0;
}

int llvm::FuncFParams(ast* pointer)
{


    return 0;
}
