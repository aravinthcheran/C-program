#include<stdio.h>
int main()
{
    int arr[3][3],i=0,j=0,max=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter the number: ");
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(arr[i][j]>max)
            {
                max=arr[i][j];
            }
        }
    }
    printf("The largest number is: %d",max);
}