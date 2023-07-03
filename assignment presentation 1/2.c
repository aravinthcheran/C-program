//Implement a function that accepts a string and returns a dynamically allocated array of characters containing the unique characters in the string, sorted in ascending order.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 100

char* getUniqueCharacters(char* str)
{
    int len = strlen(str);
    char* result = malloc(sizeof(char) * (len + 1));
    int index = 0;

    for (int i = 0; i < len; i++)
    {
        int j;
        for (j = 0; j < index; j++)
        {
            if (str[i] == result[j])
                break; 
        }
        if (j == index)
        {
            result[index++] = str[i]; 
        }
    }
    result[index] = '\0';
    return result;
}

int main()
{
    char str[max];
    printf("Enter the string: ");
    scanf("%s",str);
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