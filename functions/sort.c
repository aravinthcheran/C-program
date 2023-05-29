#include<stdio.h>
int n;
int main()
{
    int x[4]={1,2,3,4};
    int n=sizeof(x)/sizeof(x[0]);
    sort(x,n);   
}
void sort(int x[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\n",x[i]);

    }
}