#include<stdio.h>
int main()
{
    int a;
    char b[100];
    printf("Enter the number: ");
    scanf("%d",&a);
    printf("Enter the string: ");
    scanf(" %s",b);
    printf("The number is: %5d\n",a);
    printf("The string:%s",b);
}