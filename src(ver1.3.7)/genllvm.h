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
    static int CONST_DECL_G(ast* pointer);
    static int CONST_DEF_G(ast* pointer);
    static int CONST_DEF_A_G(ast* pointer, int *flag);
    static int CONST_INIT_G(ast* pointer);
    static int CONST_EXPR(ast* pointer);
    static int CONST_INIT_A_G(ast* pointer);
    static int VAR_DECL_G(ast* pointer);
    static int VAR_DEF_G(ast* pointer);
    static int VarDef_A_G(ast* pointer, int* flag);
    static int INIT_VAR_G(ast* pointer);
    static int INIT_VAR_A_G(ast* pointer);
    static int EXPR(ast* pointer);
    static int FUNC_DEF(ast* pointer);
    static int FuncFParams(ast* pointer, int* num);
    static int FuncFParam(ast* pointer, int* num);
    static int FuncFParam_A(ast* pointer);
    static int Block(ast* pointer, int* num);
    static int Block_A(ast* pointer, int* num);
    static int BlockItem(ast* pointer, int* num);
    static int Stmt(ast* pointer, int* num);
    static int CONST_DECL(ast* pointer, int* num);
    static int VAR_DECL(ast* pointer, int* num);
    static int CONST_DEF(ast* pointer, int* num);
    static int CONST_INIT(ast* pointer, int* num);
    static int ConstInitVal_A(ast* pointer, int* num);
    static int VAR_DEF(ast* pointer, int* num);
    static int INIT(ast* pointer, int* num);
    static int InitVal_A(ast* pointer, int* num);
};

#endif
