#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100];
    printf("Enter a string: ");
    scanf("%s",str1);
    if (strcmp(str1,strrev(str1))==0)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not a palindrome");
    }
}