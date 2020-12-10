/*
 * Author: Henry Liang
 * Date: 12/6/2020
 */

#ifndef GENLLVM_H
#define GENLLVM_H

#include "ast.h"

class llvm
{
public:
    //默认构造函数
    llvm(void);
    //析构函数
    ~llvm(void);
public:
    static int genllvm(char* argv[], ast* ast_root);
    static int CONST_DECL(ast* pointer);
    static int CONST_DEF(ast* pointer);
    static int CONST_DEF_A(ast* pointer, int *flag);
    static int CONST_INIT(ast* pointer);
    static int CONST_EXPR(ast* pointer);
    static int CONST_INIT_A(ast* pointer);
    static int VAR_DECL(ast* pointer);
    static int VAR_DEF(ast* pointer);
    static int VarDef_A(ast* pointer, int* flag);
    static int INIT_VAR(ast* pointer);
    static int INIT_VAR_A(ast* pointer);
    static int EXPR(ast* pointer);
    static int FUNC_DEF(ast* pointer);
    static int FuncFParams(ast* pointer);
};

#endif
