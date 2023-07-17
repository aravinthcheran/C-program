#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *vowel(char *ptr,int len);

int main()
{
    int n;
    scanf("%d",&n);
    printf("enter a string:");
    char *str=malloc(sizeof(char)*n);
    scanf("%s",str);
    char *str1=vowel(str,n);
    printf("the string without vowels are:%s",str1);
}

char *vowel(char *ptr,int n)
{
    for(int i=0;i<n;i++)
    {
        if((ptr[i]=='A')||(ptr[i]=='a')||(ptr[i]=='E')||(ptr[i]=='e')||(ptr[i]=='I')||(ptr[i]=='i')||(ptr[i]=='O')||(ptr[i]=='o')||(ptr[i]=='U')||(ptr[i]=='u'))
        {
            for(int j=i;j<n-1;j++)
            {
                ptr[j]=ptr[j+1];
            }
            i--;
            n--;
        }
    }
    ptr[n]='\0';
    return ptr;
}
