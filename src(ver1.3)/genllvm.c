/*
 * Author: Henry Liang
 * Created Date: 12/6/2020
 * Last Update: 12/6/2020
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "genllvm.h"

#define WRONG -99999

int genllvm(char* argv[], ast* ast_root)
{
    printf("; ModuleID = '%s'\n", argv[1]);
    printf("source_filename = \"%s\"\n\n", argv[1]);

    ast* cruiser = ast_root;
    while(cruiser != NULL)
    {
        if(strcmp(cruiser->node_type, "COMP_UNIT") == 0)
        {
            if(strcmp(cruiser->right->node_type, "CONST_DECL") == 0)
                llvm_CONST_DECL(cruiser->right);
            //else if(strcmp(cruiser->right->node_type, "VAR_DECL") == 0)
                //llvm_VAR_DECL(cruiser->right);
            //else if(strcmp(cruiser->right->node_type, "FUNC_DEF") == 0)
                //llvm_FUNC_DEF(cruiser->right);
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

int llvm_CONST_DECL(ast* pointer)
{
    llvm_CONST_DEF(pointer->right);
    if(pointer->next != NULL)
        llvm_CONST_DECL(pointer->next);
    return 0;
}

int llvm_CONST_DEF(ast* pointer)
{
    printf("@");
    printf("%s", pointer->value_string);

    if(pointer->left != NULL)
        llvm_CONST_DEF_A(pointer->left);
    printf(" = dso_local constant i32 ");

    llvm_CONST_INIT(pointer->right);
    printf(", align 4\n");
    return 0;
}

int llvm_CONST_DEF_A(ast* pointer)
{
    printf("[");
    printf("%d", llvm_CONST_EXPR(pointer->right));
    printf("]");

    if(pointer->next != NULL)
        llvm_CONST_DEF_A(pointer->next);

    return 0;
}

int llvm_CONST_INIT(ast* pointer)
{
    if(strcmp(pointer->value_string, "{}") == 0)
    {
        printf("{");
        if(pointer->right != NULL)
        {
            llvm_CONST_INIT(pointer->right);
            if(pointer->next != NULL)
            {
                llvm_CONST_INIT_A(pointer->next);
            }
        }
        printf("}");
    }

    else printf("%d", llvm_CONST_EXPR(pointer->next));
    return 0;
}

int llvm_CONST_INIT_A(ast* pointer)
{
    printf(",");
    llvm_CONST_INIT(pointer->right);
    if(pointer->next != NULL)
    {
        llvm_CONST_INIT_A(pointer->next);
    }

    return 0;
}

int llvm_CONST_EXPR(ast* pointer)
{
    if(strcmp(pointer->node_type, "DECIMAL") == 0)
        return pointer->value_int;
    else if(strcmp(pointer->node_type, "EXPR") == 0)
    {
        switch(pointer->value_int) {
            case '+':
                return llvm_CONST_EXPR(pointer->left) + llvm_CONST_EXPR(pointer->right);
            case '-':
                return llvm_CONST_EXPR(pointer->left) - llvm_CONST_EXPR(pointer->right);
            case '*':
                return llvm_CONST_EXPR(pointer->left) * llvm_CONST_EXPR(pointer->right);
            case '/':
                return llvm_CONST_EXPR(pointer->left) / llvm_CONST_EXPR(pointer->right);
            case '%':
                return llvm_CONST_EXPR(pointer->left) % llvm_CONST_EXPR(pointer->right);
        }
    }
    else if(strcmp(pointer->node_type, "EXP_WITH_UNARY_OP") == 0)
    {
        switch(pointer->left->value_int) {
            case '+':
                return llvm_CONST_EXPR(pointer->right);
            case '-':
                return -llvm_CONST_EXPR(pointer->right);
            case '!':
                {
                    if (llvm_CONST_EXPR(pointer->right) == 0)
                        return 1;
                    else return 0;
                }
        }
    }
    return WRONG;
}