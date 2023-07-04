//Implement a function that accepts a string and returns a dynamically allocated array of characters containing the unique characters in the string, sorted in ascending order.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 100

char* getUniqueCharacters(char* str)
{
    int len=strlen(str);
    char *p=malloc(sizeof(char)*len);
    int j=0;
    for(int i=0;i<len;i++)
    {
        if(str[i]!=str[i+1])
        {
            p[j]=str[i];
            j++;
        }
    }
    return p;
}

int main()
{
    char str[max];
    printf("Enter the string: ");
    fgets(str,max,stdin);
    char *p=malloc(sizeof(char)*strlen(str));
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
    p=getUniqueCharacters(str);
    printf("\n%s",p);
}