#include<stdio.h>
int main()
{
    int n1[]={9,2,3,4},n2;
    int *p1=n1;
    int sum=0;
    for(int i=0;i<4;i++)
    {
        sum+=*p1++;
    }
    printf("The sum is %d",sum);
}