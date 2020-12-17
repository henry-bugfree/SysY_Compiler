/*
 * Author: Henry Liang
 * Created Date: 12/6/2020
 * Last Update: 12/15/2020
 */

#include "genllvm.h"
#include <stdio.h>

ast* ast_root;
extern int yyparse(void);
extern FILE* yyin;

int main(int argc, char* argv[])
{
    FILE* input;
    FILE* output;
#if defined(linux) || defined(unix) || defined(__unix__) || defined(__unix)
    // do Unix-specific stuff
    //printf("linux/unix detected!\n");
    input = freopen("llvmIn.c", "r", stdin);
    output = freopen("llvmOut.ll", "w", stdout);
#elif defined(__WINDOWS_) || defined(_WIN32)
    // do Windows-specific stuff
    //printf("windows detected!\n");
    freopen_s(&input, "llvmIn.c", "r", stdin);
    freopen_s(&output, "llvmOut.ll", "w", stdout);
#else
    printf("Unknown OS, may lead to something wrong.\n");
    input = freopen("llvmIn.c", "r", stdin);
    output = freopen("llvmOut.ll", "w", stdout);
#endif
    printf("<--------------------SRC-------------------->\n");
    yyparse();
    printf("<--------------------AST-------------------->\n");
    show_ast(ast_root,0);
    //if using cmd, please input cmd in this format: SysY < filename.sy filename.sy
    printf("<--------------------LLVM-------------------->\n");
    llvm::genllvm(argv, ast_root);

    return 0;
}
