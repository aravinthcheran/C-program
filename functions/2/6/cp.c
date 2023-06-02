#include<stdio.h>
int main()
{
    //char *s="Hello";
    int a[]={1,2,3};
    //printf("%s",s);
    printf("%d",a);
    int *s=a;
    printf("%d",*(s+1));
}