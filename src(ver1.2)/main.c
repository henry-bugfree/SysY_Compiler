#include "ast.h"
ast* ast_root;
extern int yyparse (void);
int main(void)
{
    yyparse();
    show_ast(ast_root,0);
    return 0;
}
