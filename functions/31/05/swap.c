#include<stdio.h>
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
    //printf("%d %d\n",a,b);
}
int main()
{
    int a=5,b=10,*p1=&a,*p2=&b;
    swap(p1,p2);
    printf("%d %d\n",a,b);
}