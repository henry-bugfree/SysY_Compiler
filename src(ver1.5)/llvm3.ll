
; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @func(i32 %0) #0 {
  %2 = alloca i32, align 4
  store i32 %0, i32* %2, align 4
  ret i32 0
}

@b = dso_local global i32 4, align 4

; Function Attrs: noinline nounwind optnone uwtable
define dso_local void @func1(i32 %0) #0 {
  %2 = alloca i32, align 4
  %3 = alloca i32, align 4
  store i32 %0, i32* %2, align 4
  store i32 3, i32* %3, align 4
  ret void
}
