@a = dso_local constant i32 1, align 4
@b = dso_local constant i32 2, align 4

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @func(i32 %0) #0 {
  %2 = alloca i32, align 4
  %3 = alloca i32, align 4
  %4 = alloca i32, align 4
  %5 = alloca i32, align 4
  store i32 %0, i32* %2, align 4
  store i32 2, i32* %3, align 4
  store i32 3, i32* %4, align 4
  store i32 4, i32* %5, align 4
  ret i32 0
}

