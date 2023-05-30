#include<stdio.h>
int main()
{
    int x=15;
    int *ptr=&x;
    printf("The value of x is %d\n",x);
    printf("The value of x is %d\n",*ptr);
}