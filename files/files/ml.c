//program to write multiple lines in a file
#include<stdio.h>
#define max 1000
int main()
{
    char str[max];
    FILE *fptr;
    fptr=fopen("test.txt","w");
    while(fgets(str,max,stdin)!=NULL && str[0]!='\n')
    {
        fputs(str,fptr);
    }
    fclose(fptr);
}