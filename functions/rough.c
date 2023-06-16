#include<stdio.h>
int main()
{
    int a[5]={1.5};
    int s=sizeof(a)/sizeof(a[1]);
    printf("%d",s);
}