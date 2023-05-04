#include<stdio.h>
int main()
{
    char num[100];
    int sum=0,i=0;
    printf("Enter a number and end it with  decimal points: ");
    scanf("%s",num);
    while(num[i]!='.')
    {
        printf("%d\n",num[i]);
        sum=sum+(int)num[i]-48;
        i++;
    }
    printf("Sum of digits before decimal point is: %d",sum);
}