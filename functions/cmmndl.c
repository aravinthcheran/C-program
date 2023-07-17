#include<stdio.h>
int main(int argc,char* argv[])
{
       // Display the program name
    printf("Program Name: %s\n",argv[0]);
    // Display the arguments
    printf("Arguments are:\n");
    for(int i=1;i<argc;i++)
    {
        printf("%s\n",argv[i]);
    }
}