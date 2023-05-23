#include<stdio.h>
int isprime(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            break;
        }
    }
    if(i==n)
    {
        return 1;
    }
}
int main()
{
    int start,range;
    printf("Enter the starting range: ");
    scanf("%d",&start);
    printf("Enter the ending range: ");
    scanf("%d",&range);

    for(int i=start;i<=range;i++)
    {
        if(isprime(i)==1)
        {
            printf("%d is a prime number\n",i);
        }
        else
        {
            printf("%d is not a prime number\n",i);
        }
    }
}