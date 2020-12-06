/*
 * Author: Henry Liang
 * Date: 12/6/2020
 */

#include "genllvm.h"
#include <stdio.h>

ast* ast_root;
extern int yyparse(void);
extern FILE* yyin;

int main(int argc, char* argv[])
{
    yyparse();
    show_ast(ast_root,0);
    //please input cmd in this format: SysY < filename.sy filename.sy
    genllvm(argv, ast_root);

    return 0;
}
