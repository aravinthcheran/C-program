#include<stdio.h>
int main()
{
    char para[1000];
    printf("Enter the paragraph: ");
    gets(para);
    printf("The paragraph is: %s",para);
    return 0;
}