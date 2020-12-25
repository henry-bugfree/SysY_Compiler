/*
 * Author: Henry Liang
 * Date: 12/6/2020
 */

#ifndef GENLLVM_H
#define GENLLVM_H

#include "ast.h"

int genllvm(ast* root);

namespace GCD//global constant declaration
{
    int CONST_DECL(ast* pointer);
    int CONST_DEF(ast* pointer);
    int CONST_EXPR(ast* pointer);
}

namespace GVD//global variable declaration
{
    int AddExp(ast* pointer);
    int MulExp(ast* pointer);
    int UnaryExp(ast* pointer);
    int VAR_DECL(ast* pointer);
    int VAR_DEF(ast* pointer);
}

namespace GFD//global function definition
{
    int FUNC_DEF(ast* pointer);
    int FuncFParams(ast* pointer, int* num);
    int FuncFParam(ast* pointer, int* num);
    int Block(ast* pointer);
    int Block_A(ast* pointer);
    int BlockItem(ast* pointer);
    int CONST_DECL(ast* pointer);
    int CONST_DEF(ast* pointer);
    int CONST_EXPR(ast* pointer);
    int VAR_DECL(ast* pointer);
    int VAR_DEF(ast* pointer);
    int STMT(ast* pointer);
    int FuncRParams(ast* pointer);
}

namespace FS//function scout
{
    int func_scout(ast* pointer);
    int block_a_scout(ast* pointer);
    int blockitem_scout(ast* pointer);
    int CONST_DECL(ast* pointer);
    int CONST_DEF(ast* pointer);
    int VAR_DECL(ast* pointer);
    int VAR_DEF(ast* pointer);
}

namespace FVD//in function variable declaration
{
    int AddExp(ast* pointer, int id_num);
    int MulExp(ast* pointer, int id_num);
    int UnaryExp(ast* pointer, int id_num);
}

namespace RST//return statement
{
    int AddExp(ast* pointer);
    int MulExp(ast* pointer);
    int UnaryExp(ast* pointer);
}
#endif
