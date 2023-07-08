// sort the lines of the text file in alphabetical order
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *fp;
    fp = fopen("test.txt","r");
    if(fp==NULL)
    {
        printf("File not found");
        exit(1);
    }
    char str[100][100];
    int i=0;
    while(fgets(str[i],100,fp)!=NULL)
    {
        i++;
    }
    fclose(fp);
    int n=i;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(strcmp(str[i],str[j])>0)
            {
                char temp[100];
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }
    fp=fopen("text.txt","w");
    for(int i=0;i<n;i++)
    {
        fputs(str[i],fp);
    }
    fclose(fp);
    return 0;
}
