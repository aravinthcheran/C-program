#include<stdio.h>
int main(int argc,char* argv[])
{
    printf("Program Name: %s\n",argv[0]);
    printf("Arguments are:\n");
    for(int i=1;i<argc;i++)
    {
        printf("%s\n",argv[i]);
    }
}