/*
 * Author: Henry Liang
 * Date: 12/6/2020
 */

#ifndef GENLLVM_H
#define GENLLVM_H

#include "ast.h"
namespace llvm
{
    int genllvm(ast* root);
    int CONST_DECL(ast* pointer, char mode);
    int CONST_DEF(ast* pointer, char mode);
    int CONST_EXPR(ast* pointer);
    int AddExp(ast* pointer, char mode);
    int MulExp(ast* pointer, char mode);
    int UnaryExp(ast* pointer, char mode);
    int VAR_DECL(ast* pointer, char mode);
    int VAR_DEF(ast* pointer, char mode);
    int FUNC_DEF(ast* pointer);
    int func_scout(ast* pointer);
    int block_a_scout(ast* pointer);
    int blockitem_scout(ast* pointer);
    int FuncFParams(ast* pointer, int* num);
    int FuncFParam(ast* pointer, int* num);
    int Block(ast* pointer);
    int Block_A(ast* pointer);
    int BlockItem(ast* pointer);
    int STMT(ast* pointer);
    int para_scout(ast* pointer);
    int para_scout1(ast* pointer);
    int FuncRParams(ast* pointer);
}

#endif
