#include<stdio.h>
int main()
{
    int i=0,j=0;
    char arr[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter the character: ");
            scanf(" %c",&arr[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%c",arr[i][j]);
            printf("\n");
        }

    }
}