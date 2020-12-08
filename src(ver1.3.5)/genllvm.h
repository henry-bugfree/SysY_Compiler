/*
 * Author: Henry Liang
 * Date: 12/6/2020
 */

#ifndef GENLLVM_H
#define GENLLVM_H

#include "ast.h"

int genllvm(char* argv[], ast* ast_root);
int llvm_CONST_DECL(ast* pointer);
int llvm_CONST_DEF(ast* pointer);
int llvm_CONST_DEF_A(ast* pointer, int *flag);
int llvm_CONST_INIT(ast* pointer);
int llvm_CONST_EXPR(ast* pointer);
int llvm_CONST_INIT_A(ast* pointer);
int llvm_VAR_DECL(ast* pointer);
int llvm_VAR_DEF(ast* pointer);
int llvm_VarDef_A(ast* pointer, int* flag);
int llvm_INIT_VAR(ast* pointer);
int llvm_INIT_VAR_A(ast* pointer);
int llvm_EXPR(ast* pointer);

#endif
