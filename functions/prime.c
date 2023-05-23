#include<stdio.h>

int main()
{
    int n,i;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(n==0)
    {
        printf("0 is neither prime nor composite\n");
        return 0;
    }
    for(i=2;i<n;i++)
    {
        if(isfactor(n,i)==1)
        {
            printf("%d is not a prime number\n",n);
            break;
        }
        
    }
    if(i==n)
    {
        printf("%d is a prime number\n",n);
    }
    
}
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