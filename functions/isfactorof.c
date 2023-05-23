#include<stdio.h>
int isfactor(int n,int x)
{
    if(n%x==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,x;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("Enter the factor: ");
    scanf("%d",&x);
    if(isfactor(n,x)==1)
    {
        printf("%d is a factor of %d",x,n);
    }
    else{
        printf("%d is not a factor of %d",x,n);
    }
    
}