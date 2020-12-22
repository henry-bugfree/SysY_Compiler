<--------------------SRC-------------------->
int g[2][2][2] = {1,2,3,4,5,6,7,8};
const int d[2][2] = {1,2,3,4};
int f[2] = {1,2};
int e=2;
int main()
{
    return 0;
}
void func1(int a)
{
    const int b=3;
    const int c=1;
}
void func2(int a)
{
    int b=e;
    int c=1;
}
<--------------------AST-------------------->

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
      INIT_VAR ''
        DECIMAL 2

COMP_UNIT
  FUNC_DEF 'int' 'main'
    BLOCK
      BLOCK_ITEM
        STMT 'return'
          DECIMAL 0

COMP_UNIT
  FUNC_DEF 'void' 'func1'
    FUNC_PARAMS
      FUNC_PARAM 'int' 'a'
    BLOCK
      BLOCK_ITEM
        CONST_DECL 'int'
          CONST_DEF 'b'
            CONST_INIT ''
            DECIMAL 3
      BLOCK_ITEM
        CONST_DECL 'int'
          CONST_DEF 'c'
            CONST_INIT ''
            DECIMAL 1

COMP_UNIT
  FUNC_DEF 'void' 'func2'
    FUNC_PARAMS
      FUNC_PARAM 'int' 'a'
    BLOCK
      BLOCK_ITEM
        VAR_DECL 'int'
          VAR_DEF 'b'
            INIT_VAR ''
              IDENTIFIER 'e'
      BLOCK_ITEM
        VAR_DECL 'int'
          VAR_DEF 'c'
            INIT_VAR ''
              DECIMAL 1
<--------------------LLVM-------------------->
; ModuleID = 'llvmIn.c'
source_filename = "llvmIn.c"

@g = dso_local global [2 * [2 * [2 * i32]]] [i32 1, i32 2, i32 3, i32 4, i32 5, i32 6, i32 7, i32 8], align 16
@d = dso_local constant [2 * [2 * i32]] [i32 1, i32 2, i32 3, i32 4], align 16
@f = dso_local global [2 * i32] [i32 1, i32 2], align 4
@e = dso_local global i32 2, align 4

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {

; Function Attrs: noinline nounwind optnone uwtable
define dso_local void @func1(i32 %0) #0 {
  %2 = alloca i32, align 4
  store i32 %0, i32* %2, align 4
  %3 = alloca i32, align 4
  store i32 3, i32* %3, align 4
  %4 = alloca i32, align 4
  store i32 1, i32* %4, align 4
  ret void
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local void @func2(i32 %0) #0 {
  %2 = alloca i32, align 4
  store i32 %0, i32* %2, align 4
  %3 = alloca i32, align 4
  store i32 0, i32* %3, align 4
  %4 = alloca i32, align 4
  store i32 0, i32* %4, align 4
  ret void
}
