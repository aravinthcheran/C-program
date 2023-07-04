#include<stdio.h>
#define max 1000
int main()
{
    char str[max];
    FILE *fptr;
    fptr=fopen("test.txt","w");
    fgets(str,max,stdin);
    fputs(str,fptr);
    fclose(fptr);
}
