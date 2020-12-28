int a = 0;
int c = 2;
int func()
{
    int b = 1+a*2-c/5;
	return 0;
}

int func2(int g,int h,int j)
{
    int b = 1+func();
    return func();
}

int func3()
{
    int d=2;
    int b = func2(a,3,d);
    return 0;
}