%{

#include <stdio.h>
int yylex(void);
void yyerror(char *);

%}

%token T_Octal T_Hexadecimal
%token SIZEOF CONSTANT STRING_LITERAL IDENTIFIER
%token PTR_OP INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token XOR_ASSIGN OR_ASSIGN TYPE_NAME

%token TYPEDEF EXTERN STATIC AUTO REGISTER
%token CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE CONST VOLATILE VOID
%token STRUCT UNION ENUM ELLIPSIS

%token CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN

%start CompUnit

%%

CompUnit
    : Decl
    | FuncDef
    | CompUnit Decl
    | CompUnit FuncDef
    ;

Decl
    : ConstDecl
    | VarDecl
    ;

ConstDecl_A
    : ',' ConstDef
    | ConstDecl_A ',' ConstDef
    ;

ConstDecl
    : CONST BType ConstDef ';'
    | CONST BType ConstDef ConstDecl_A ';'
    ;

BType
    : INT
    ;

ConstDef_A
    : '[' ConstExp ']'
    | ConstDef_A '[' ConstExp ']'
    ;

ConstDef
    : IDENTIFIER '=' ConstInitVal
    | IDENTIFIER ConstDef_A '=' ConstInitVal
    ;

ConstInitVal_A
    : ',' ConstInitVal
    | ConstInitVal_A ',' ConstInitVal
    ;

ConstInitVal
    : ConstExp
	| '{' ConstInitVal '}'
	| '{' '}'
	| '{' ConstInitVal_A '}'
	;

VarDecl_A
	: ',' VarDef
	| VarDecl_A ',' VarDef
	;

VarDecl
    : BType VarDef ';'
    | BType VarDef VarDecl_A ';'
    ;

VarDef_A
    : '[' ConstExp ']'
    | VarDef_A '[' ConstExp ']'
    ;

VarDef
    : IDENTIFIER
    | IDENTIFIER VarDef_A
	| IDENTIFIER '=' InitVal
	| IDENTIFIER VarDef_A '=' InitVal
	;

InitVal_A
    : ',' InitVal
    | InitVal_A ',' InitVal
    ;

InitVal
    : Exp
    | '{' InitVal '}'
    | '{' '}'
    | '{' InitVal_A '}'
    ;

FuncDef
    : VOID IDENTIFIER '(' ')' Block
    | VOID IDENTIFIER '(' FuncFParams ')' Block
    | BType IDENTIFIER '(' ')' Block
    | BType IDENTIFIER '(' FuncFParams ')' Block
    ;

FuncFParams_A
    : ',' FuncFParam
    | FuncFParams_A ',' FuncFParam
    ;

FuncFParams
    : FuncFParam
    | FuncFParam FuncFParams_A
    ;

FuncFParam_A
    : '[' ']'
    | '[' Exp ']'
    | FuncFParam_A '[' ']'
    | FuncFParam_A '[' Exp ']'
    ;

FuncFParam
    : BType IDENTIFIER
    | BType IDENTIFIER FuncFParam_A
    ;

Block_A
    : BlockItem
    | Block_A BlockItem
    ;

Block
    : '{' '}'
    | '{' Block_A '}'
    ;

BlockItem
    : Decl
    | Stmt
    ;

Stmt
    : LVal '=' Exp ';'
    | ';'
    | Exp ';'
    | Block
    | IF '(' Cond ')' Stmt
	| IF '(' Cond ')' Stmt ELSE
	| WHILE '(' Cond ')' Stmt
	| BREAK ';'
	| CONTINUE ';'
	| RETURN ';'
	| RETURN Exp ';'
	;

Exp
    : AddExp
    ;

Cond
    : LOrExp
    ;

LVal_A
    : '[' Exp ']'
    | LVal_A '[' Exp ']'
    ;

LVal
    : IDENTIFIER LVal_A
    ;

PrimaryExp
    : '(' Exp ')'
    | LVal
    | Number
    ;

Number
    : CONSTANT
    ;

UnaryExp
    : PrimaryExp
    | IDENTIFIER '(' ')'
    | IDENTIFIER '(' FuncRParams ')'
	| UnaryOp UnaryExp
	;

UnaryOp
    : '+'
    | '-'
    | '!'
    ;

FuncRParams_A
    : ',' Exp
    | FuncRParams_A ',' Exp
    ;

FuncRParams
    : Exp FuncRParams_A
    ;

MulExp_A
    : '*'
    | '/'
    | '%'
    ;

MulExp
    : UnaryExp
    | MulExp MulExp_A UnaryExp
    ;

AddExp_A
    : '+'
    | '-'
    ;

AddExp
    : MulExp
    | AddExp AddExp_A MulExp
    ;

RelExp_A
    : '<'
    | '>'
    | LE_OP
    | GE_OP
    ;

RelExp
    : AddExp
    | RelExp RelExp_A AddExp
    ;

EqExp_A
    : EQ_OP
    | NE_OP
    ;

EqExp
    : RelExp
    | EqExp EqExp_A RelExp
    ;

LAndExp
    : EqExp
    | LAndExp AND_OP EqExp
    ;

LOrExp
    : LAndExp
    | LOrExp OR_OP LAndExp
    ;

ConstExp
    : AddExp
    ;

%%
extern char yytext[];
extern int column;

void yyerror(char *s)
{
	fflush(stdout);
	printf("\n%*s\n%*s\n", column, "^", column, s);
}

int main(void)
{
    yyparse();
    return 0;
}
