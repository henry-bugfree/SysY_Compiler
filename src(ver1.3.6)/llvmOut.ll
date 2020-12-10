<--------------------SRC-------------------->
int g[2][2][2] = {1,2,3,4,5,6,7,8};
const int d[2][2] = {1,2,3,4};
int f[2] = {1,2};
int e;
int main()
{
    int a = 1;
    int b = e;
    return 0;
}
void func1(int argc)
{
    int a=1;
    int b=e;
}
void func2(int argc)
{

}
int func(int a, int b, int c)
{
    return 0;
}<--------------------AST-------------------->

COMP_UNIT
  VAR_DECL 'int'
    VAR_DEF 'g'
      VAR_DEF_A '[]'
        DECIMAL 2
      VAR_DEF_A '[]'
        DECIMAL 2
      VAR_DEF_A '[]'
        DECIMAL 2
      INIT_VAR '{}'
        INIT_VAR ''
          DECIMAL 1
      INIT_VAR ''
        INIT_VAR ''
          DECIMAL 2
      INIT_VAR ''
        INIT_VAR ''
          DECIMAL 3
      INIT_VAR ''
        INIT_VAR ''
          DECIMAL 4
      INIT_VAR ''
        INIT_VAR ''
          DECIMAL 5
      INIT_VAR ''
        INIT_VAR ''
          DECIMAL 6
      INIT_VAR ''
        INIT_VAR ''
          DECIMAL 7
      INIT_VAR ''
        INIT_VAR ''
          DECIMAL 8

COMP_UNIT
  CONST_DECL 'int'
    CONST_DEF 'd'
      CONST_DEF_A '[]'
        DECIMAL 2
      CONST_DEF_A '[]'
        DECIMAL 2
      CONST_INIT '{}'
        CONST_INIT ''
        DECIMAL 1
      CONST_INIT ''
        CONST_INIT ''
        DECIMAL 2
      CONST_INIT ''
        CONST_INIT ''
        DECIMAL 3
      CONST_INIT ''
        CONST_INIT ''
        DECIMAL 4

COMP_UNIT
  VAR_DECL 'int'
    VAR_DEF 'f'
      VAR_DEF_A '[]'
        DECIMAL 2
      INIT_VAR '{}'
        INIT_VAR ''
          DECIMAL 1
      INIT_VAR ''
        INIT_VAR ''
          DECIMAL 2

COMP_UNIT
  VAR_DECL 'int'
    VAR_DEF 'e'

COMP_UNIT
  FUNC_DEF 'int' 'main'
    BLOCK
      BLOCK_ITEM
        VAR_DECL 'int'
          VAR_DEF 'a'
            INIT_VAR ''
              DECIMAL 1
      BLOCK_ITEM
        VAR_DECL 'int'
          VAR_DEF 'b'
            INIT_VAR ''
              IDENTIFIER 'e'
      BLOCK_ITEM
        STMT 'return'
          DECIMAL 0

COMP_UNIT
  FUNC_DEF 'void' 'func1'
    FUNC_PARAMS
      FUNC_PARAM 'int' 'argc'
    BLOCK
      BLOCK_ITEM
        VAR_DECL 'int'
          VAR_DEF 'a'
            INIT_VAR ''
              DECIMAL 1
      BLOCK_ITEM
        VAR_DECL 'int'
          VAR_DEF 'b'
            INIT_VAR ''
              IDENTIFIER 'e'

COMP_UNIT
  FUNC_DEF 'void' 'func2'
    FUNC_PARAMS
      FUNC_PARAM 'int' 'argc'
    BLOCK

COMP_UNIT
  FUNC_DEF 'int' 'func'
    FUNC_PARAMS
      FUNC_PARAM 'int' 'a'
    FUNC_PARAMS
      FUNC_PARAM 'int' 'b'
    FUNC_PARAMS
      FUNC_PARAM 'int' 'c'
    BLOCK
      BLOCK_ITEM
        STMT 'return'
          DECIMAL 0
<--------------------LLVM-------------------->
; ModuleID = 'llvmIn.c'
source_filename = "llvmIn.c"

@d = dso_local constant [2 * [2 * i32]] [i32 1, i32 2, i32 3, i32 4], align 16

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {

; Function Attrs: noinline nounwind optnone uwtable
define dso_local void @func1() #0 {

; Function Attrs: noinline nounwind optnone uwtable
define dso_local void @func2() #0 {

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @func() #0 {
