#include<stdio.h>
int main()
{
    char x[]="ABCD",str[]="XYZ";
    printf("%d\n",strlen(x));
    printf("%d\n",sizeof(x));
    strcat(x,str);
    printf("%s",x);
    strcpy(str,x);
    printf("%s",str);
}