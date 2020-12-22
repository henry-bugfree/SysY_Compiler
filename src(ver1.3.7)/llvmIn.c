int g[2][2][2] = {1,2,3,4,5,6,7,8};
const int d[2][2] = {1,2,3,4};
int f[2] = {1,2};
int e=2;
int main()
{
    return 0;
}
int func1(int a)
{
    const int b=3;
    const int c=1;
    return b;
}
void func2(int a)
{
    if(1==2)
    {
        int d=f[1]+3-func1(1);
    }
    else
    {
        int b=1;
    }

}
