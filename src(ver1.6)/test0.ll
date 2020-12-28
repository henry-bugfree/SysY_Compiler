; ModuleID = 'test0.c'
source_filename = "test0.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-pc-linux-gnu"

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
  %7 = sub nsw i32 %4, %6
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

attributes #0 = { noinline nounwind optnone uwtable "correctly-rounded-divide-sqrt-fp-math"="false" "disable-tail-calls"="false" "frame-pointer"="all" "less-precise-fpmad"="false" "min-legal-vector-width"="0" "no-infs-fp-math"="false" "no-jump-tables"="false" "no-nans-fp-math"="false" "no-signed-zeros-fp-math"="false" "no-trapping-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "unsafe-fp-math"="false" "use-soft-float"="false" }

!llvm.module.flags = !{!0}
!llvm.ident = !{!1}

!0 = !{i32 1, !"wchar_size", i32 4}
!1 = !{!"clang version 10.0.0-4ubuntu1 "}
