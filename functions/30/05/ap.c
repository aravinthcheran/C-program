#include<stdio.h>
int main()
{
    int n1[]={9,2,3,4},n2;
    int *p1=n1,*p2=&n2;
    printf("The address of n1 is %d  %d\n",n1,p1);
    printf("The address of n2 is %d  %d\n",&n2,p2);
    printf("The values of n1 are %d  %d\n",n1[0],*p1);
    printf("The values of n2 are %d  %d",n2,*p2);
    printf("The value of n1 are");
    printf("%d %d %d %d\n",*(p1),*(p1+1),*(p1+2),*(p1+3));
    for(int i=0;i<4;i++)
    {
        printf("The value and address are %d-%d\n",*p1++,(p1+i));
    }
}