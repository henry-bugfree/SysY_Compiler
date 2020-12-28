@a = dso_local global i32 0, align 4
@c = dso_local global i32 2, align 4

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @func() #0 {
  %1 = alloca i32, align 4
  %2 = load i32, i32* @a, align 4
  %3 = mul nsw i32 %2, 2
  %4 = add nsw i32 1, %3
  %5 = load i32, i32* @c, align 4
  %6 = sdiv i32 %5, 5
  %7 = sub nsw i32 %5, %6
  store i32 %7, i32* %1, align 4
  ret i32 0
}


; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @func2(i32 %0, i32 %1, i32 %2) #0 {
  %4 = alloca i32, align 4
  %5 = alloca i32, align 4
  %6 = alloca i32, align 4
  %7 = alloca i32, align 4
  store i32 %0, i32* %4, align 4
  store i32 %1, i32* %5, align 4
  store i32 %2, i32* %6, align 4
  %8 = call i32 @func()
  %9 = add nsw i32 1, %8
  store i32 %9, i32* %7, align 4
  %10 = call i32 @func()
  ret i32 %10
}


; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @func3() #0 {
  %1 = alloca i32, align 4
  %2 = alloca i32, align 4
  store i32 2, i32* %1, align 4
  %3 = load i32, i32* @a, align 4
  %4 = load i32, i32* %1, align 4
  %5 = call i32 @func2(i32 %3, i32 3, i32 %4)
  store i32 %5, i32* %2, align 4
  ret i32 0
}

