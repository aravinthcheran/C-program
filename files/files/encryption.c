//Write a program in C to encrypt the contents of a file using a simple encryption algorithm.
#include<stdio.h>
#define KEY 10
void encryption(char* filename)
{
    FILE *fp=fopen(filename,"r+b");
    if(fp==NULL)
    {
        printf("Error in opening file");
        return;
    }
    char ch;
    while((ch=fgetc(fp))!=EOF)
    {
        ch=ch^KEY;
        fseek(fp,-1,SEEK_CUR);
        fputc(ch,fp);
    }
    fclose(fp);
    printf("File encrypted successfully");
}
int main()
{
    char filename[]="text.txt";
    //printf("Enter the filename:");
    //fgets(filename,100,stdin);
    encryption(filename);
    return 0;
}