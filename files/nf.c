// to write a number in a file and read it using fprintf and fscanf
#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("nu.txt","w");
    int n=5,i;
    fprintf(fp,"%d",n);
    fclose(fp);
    fp=fopen("nu.txt","r");
    if(fp==NULL)
    {
        printf("File not found");
        return 0;
    }
    fscanf(fp,"%d",&i);
    fclose(fp);
    printf("%d",i);
}