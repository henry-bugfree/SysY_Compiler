/*
 * Author: Henry Liang
 * Date: 11/20/2020
 */

typedef struct _ast ast;
struct _ast
{
    int value_int;
    char* value_string;
    char* value_string1;
	char* node_type;
    ast* left;
    ast* right;
    ast* extend;
};

void show_ast(ast* node, int nest);
ast* new_node();
ast* new_dec(int value);
ast* new_oct(int value);
ast* new_hex(int value);
ast* new_expr(int op, ast* left, ast* right);
ast* new_id(char* value);
ast* new_subscript(ast* left, ast* right);
ast* new_id_with_subscript(char* value, ast* right);
ast* new_unary_op(char* value);
ast* new_exp_with_unary_op(ast* left, ast* right);
ast* new_func_params(ast* left, ast* right);
ast* new_square_brackets(ast* right);
ast* new_func_param_a(ast* left, ast* right);
ast* new_func_param(char* value1, char* value2, ast* left);
ast* new_func_call_id(char* value, ast* right);
ast* new_func_call_params(ast* left, ast* right);
ast* new_func_call_params_a(ast* left, ast* right);
ast* new_const_init(ast* left, ast* right, char* indicator);
ast* new_const_init_a(ast* left, ast* right);
ast* new_const_def_a(ast* left, ast* right);
ast* new_const_def(char* value, ast* left, ast* right);
ast* new_const_decl_a(ast* left, ast* right);
ast* new_const_decl(char* value, ast* left, ast* right);
ast* new_var_decl_a(ast* left, ast* right);
ast* new_var_decl(char* value, ast* left, ast* right);
ast* new_var_def_a(ast* left, ast* right);
ast* new_var_def(char* value, ast* left, ast* right);
ast* new_init_var_a(ast* left, ast* right);
ast* new_init_var(ast* left, ast* right, char* indicator);
ast* new_func_def(char* value1, char* value2, ast* left, ast* right);
ast* new_block_a(ast* left, ast* right);
ast* new_block(ast* left);
ast* new_stmt(char* value1,char* value2,ast* left,ast* right,ast* extend);
ast* new_l_or_exp(char* value, ast* left, ast* right);
ast* new_l_and_exp(char* value, ast* left, ast* right);
ast* new_eq_exp(char* value, ast* left, ast* right);
ast* new_rel_exp(char* value, ast* left, ast* right);