
; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @func3(i32 %0, i32 %1) #0 {
  %3 = alloca i32, align 4
  %4 = alloca i32, align 4
  store i32 %0, i32* %3, align 4
  store i32 %1, i32* %4, align 4

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @func1(i32 %0) #0 {
  %2 = alloca i32, align 4
  %3 = alloca i32, align 4
  store i32 %0, i32* %2, align 4

; Function Attrs: noinline nounwind optnone uwtable
define dso_local void @func2() #0 {
  ret void
}
