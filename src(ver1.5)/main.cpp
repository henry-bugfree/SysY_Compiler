/*
 * Author: Henry Liang
 * Created Date: 12/6/2020
 * Last Update: 12/25/2020
 */

#include "genllvm.h"
#include <stdio.h>
#include <string>
#include <string.h>
#include <iostream>
#include <fstream>
#include <ctype.h>
#include "ast.h"
ast* ast_root;
extern int yyparse(void);

int driver()
{
    yyparse();
    //show_ast(ast_root,0);
    genllvm(ast_root);
    return 0;
}

int main(int argc, char* argv[])
{
    int case_num = 0;
    FILE* input;
    FILE* output;

    std::string ifile_name = "test"+std::to_string(case_num)+".c";
    const char* iname = ifile_name.c_str();
    input = freopen(iname,"r",stdin);

    while(input)
    {
        std::string ofile_name = "llvm"+std::to_string(case_num)+".ll";
        const char* oname = ofile_name.c_str();
        output = freopen(oname,"w",stdout);

        driver();

        std::string ifile_name = "test"+std::to_string(++case_num)+".c";
        const char* iname = ifile_name.c_str();
        input = freopen(iname,"r",stdin);
    }

    return 0;
}