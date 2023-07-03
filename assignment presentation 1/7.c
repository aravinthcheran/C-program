#include<stdio.h>
#include<string.h>
char* remove1(char *str,int len);
int main()
{
    char str[100];
    printf("Enter the string: ");
    scanf("%s",str);
    int len=strlen(str);
    printf("The new string is:%s",remove1(str,len));
}
char* remove1(char *str,int len)
{
    char *str1=malloc(sizeof(char)*len);
    int j=0;
    for(int i=0;i<len;i++)
    {
       if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' &&
            str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U')
        {
            str1[j]=str[i];
            j++;
        }
    }
    str1[j]='\0';
    return str1;
}
