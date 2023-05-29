#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50],str2[50];
    printf("Enter the string: ");
    //scanf("%s",str1);
    fgets(str1,50,stdin);
    strcpy(str2,str1);
    printf("The copied string is: %s",str2);
}