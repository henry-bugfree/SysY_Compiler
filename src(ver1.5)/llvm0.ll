@a = common dso_local global i32 2, align 4
@b = common dso_local global i32 2, align 4

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @func(i32 0, i32 1) #0 {
  3 = alloca i32, align 4
  4 = alloca i32, align 4
  5 = alloca i32, align 4
  store i32 0, i32* 3, align 4
  store i32 1, i32* 4, align 4
  6 = load i32, i32* 3, align 4
  store i32 6, i32* 5, align 4
  %7 = load i32, i32* @a, align 4
  ret i32 7
}

