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
    for (int i = 0; i < len; i++) {
        char ch = str[i];
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
            ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') {
            str[j] = ch;
            j++;
        }
    }

    str[j] = '\0';
    return str;
}
