#include<stdio.h>
int add(int *a,int n)
{
    printf("[");
    for(int i=0;i<n;i++)
    {
        *(a+i)=*(a+i)+1;
        printf("%d",*(a+i));
        if(i!=n-1)
            printf(",");
    }
    printf("]");
}
int add2(int a[],int n)
{
    int *t=a;
    for(int i=0;i<n;i++)
    {
        *(t+i)=*(t+i)+1;
    }
}
int main()
{
    int a[]={1,2,3};
    int *s=a;
    int n = sizeof(a)/sizeof(a[0]);
    add(s,n);
    printf("[");
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
        if(i!=n-1)
            printf(",");
    }
    printf("]");
    printf("\n");
    add2(a,n);
    printf("[");
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
        if(i!=n-1)
            printf(",");
    }
    printf("]");
}