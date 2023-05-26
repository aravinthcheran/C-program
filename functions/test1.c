#include<stdio.h>
void test1();
int main()
{
    extern int i; //declaration(no memory allocation)
    test1();
    printf("%d\n",i);
    test1();
}
int i=1; //definition(memory allocation)
void test1()
{
    i++;
    printf("%d\n",i);
}