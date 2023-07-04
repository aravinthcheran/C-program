#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("test.txt","r");
    fseek(fptr,1,2);
    printf("%ld",ftell(fptr));
    printf("\n%d\n",feof(fptr));
    fclose(fptr);  
}