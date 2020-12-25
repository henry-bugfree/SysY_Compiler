int b = 4;
void func1(int q)
{
    const int a = 3;
}
int func(int p)
{
    func1(p);
    func1(2);
    return 0;
}