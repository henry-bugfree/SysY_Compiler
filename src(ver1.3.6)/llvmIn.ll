; ModuleID = 'llvmIn.c'
source_filename = "llvmIn.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-pc-linux-gnu"

@g = dso_local global [2 x [2 x [2 x i32]]] [[2 x [2 x i32]] [[2 x i32] [i32 1, i32 2], [2 x i32] [i32 3, i32 4]], [2 x [2 x i32]] [[2 x i32] [i32 5, i32 6], [2 x i32] [i32 7, i32 8]]], align 16
@d = dso_local constant [2 x [2 x i32]] [[2 x i32] [i32 1, i32 2], [2 x i32] [i32 3, i32 4]], align 16
@f = dso_local global [2 x i32] [i32 1, i32 2], align 4
@e = common dso_local global i32 0, align 4

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  %2 = alloca i32, align 4
  %3 = alloca i32, align 4
  store i32 0, i32* %1, align 4
  store i32 1, i32* %2, align 4
  %4 = load i32, i32* @e, align 4
  store i32 %4, i32* %3, align 4
  ret i32 0
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local void @func1(i32 %0) #0 {
  %2 = alloca i32, align 4
  %3 = alloca i32, align 4
  %4 = alloca i32, align 4
  store i32 %0, i32* %2, align 4
  store i32 1, i32* %3, align 4
  %5 = load i32, i32* @e, align 4
  store i32 %5, i32* %4, align 4
  ret void
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local void @func2(i32 %0) #0 {
  %2 = alloca i32, align 4
  store i32 %0, i32* %2, align 4
  ret void
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @func([9 x i32]* %0, i32* %1, [5 x [2 x i32]]* %2) #0 {
  %4 = alloca [9 x i32]*, align 8
  %5 = alloca i32*, align 8
  %6 = alloca [5 x [2 x i32]]*, align 8
  %7 = alloca [6 x [7 x i32]], align 16
  store [9 x i32]* %0, [9 x i32]** %4, align 8
  store i32* %1, i32** %5, align 8
  store [5 x [2 x i32]]* %2, [5 x [2 x i32]]** %6, align 8
  %8 = load [9 x i32]*, [9 x i32]** %4, align 8
  %9 = getelementptr inbounds [9 x i32], [9 x i32]* %8, i64 4
  %10 = getelementptr inbounds [9 x i32], [9 x i32]* %9, i64 0, i64 5
  store i32 100, i32* %10, align 4
  %11 = load [9 x i32]*, [9 x i32]** %4, align 8
  %12 = getelementptr inbounds [9 x i32], [9 x i32]* %11, i64 4
  %13 = getelementptr inbounds [9 x i32], [9 x i32]* %12, i64 0, i64 5
  %14 = load i32, i32* %13, align 4
  ret i32 %14
}

attributes #0 = { noinline nounwind optnone uwtable "correctly-rounded-divide-sqrt-fp-math"="false" "disable-tail-calls"="false" "frame-pointer"="all" "less-precise-fpmad"="false" "min-legal-vector-width"="0" "no-infs-fp-math"="false" "no-jump-tables"="false" "no-nans-fp-math"="false" "no-signed-zeros-fp-math"="false" "no-trapping-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "unsafe-fp-math"="false" "use-soft-float"="false" }

!llvm.module.flags = !{!0}
!llvm.ident = !{!1}

!0 = !{i32 1, !"wchar_size", i32 4}
!1 = !{!"clang version 10.0.0-4ubuntu1 "}
