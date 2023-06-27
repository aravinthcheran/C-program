//Write a recursive function to calculate the power of a given number (x^n), where both x and n are integers.
#include<stdio.h>
int power(int x,int n)
{
    if(n==1)
    {
        return x;
    }
    else
    {
        return x*power(x,n-1);
    }
}
int main()
{
    int x,n;
    printf("Enter the value of x: ");
    scanf("%d",&x);
    printf("\nEnter the value of n: ");
    scanf("%d",&n);
    printf("\n%d^%d = %d",x,n,power(x,n));
    return 0;
}