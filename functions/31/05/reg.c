#include<stdio.h>
void test()
{
    static int x;
    printf("%d\n",x);
}
int main()
{
    register int i;
    test();
    printf("%d\n",i);
}