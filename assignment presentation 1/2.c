//Implement a function that accepts a string and returns a dynamically allocated array of characters containing the unique characters in the string, sorted in ascending order.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str[100];
    printf("Enter the string: ");
    scanf("%s",str);
    char *p;
    p=(char *)malloc(sizeof(char)*100);
    for(int i=0;i<strlen(str);i++)
    {
        for(int j=i;j<strlen(str);j++)
        {
            if(str[i]>str[j])
            {
                char temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
    printf("\n%s",str);
    for(int i=0;i<strlen(str);i++)
    {
        for(int j=i;j<strlen(str);j++)
        {
            if(str[i]==str[j])
            {
                continue;
            }
            *p+=str[i];
        }
    }
    printf("\n%s",p);
}