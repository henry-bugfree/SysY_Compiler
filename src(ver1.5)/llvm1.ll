@a = dso_local global i32 1, align 4
@b = common dso_local global i32 0, align 4
@i = common dso_local global i32 0, align 4

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @func(i32 %0, i32 %1) #0 {
  %3 = alloca i32, align 4
  %4 = alloca i32, align 4
  %5 = alloca i32, align 4
  %6 = alloca i32, align 4
  %7 = alloca i32, align 4
  %8 = alloca i32, align 4
  store i32 %0, i32* %3, align 4
  store i32 %1, i32* %4, align 4
  %9 = load i32, i32* %4, align 4
  store i32 %9, i32* %6, align 4
  store i32 2, i32* %7, align 4
  store i32 2, i32* %8, align 4
  store i32 3, i32* %8, align 4
  store i32 4, i32* %8, align 4
  %10 = load i32, i32* %3, align 4
  ret i32 10
}

