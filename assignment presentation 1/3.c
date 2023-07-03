/*Write a function that accepts a two-dimensional array of integers and returns the transpose of the
array (rows become columns and vice versa).*/
#include<stdio.h>
int transpose(int r,int c,int arr[r][c]);
int main()
{
    printf("Enter the number of rows: ");
    int r;
    scanf("%d",&r);
    printf("Enter the number of columns: ");
    int c;
    scanf("%d",&c);
    int arr[r][c];
    printf("Enter the elements of the array: ");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    transpose(r,c,arr);
}
int transpose(int r,int c,int arr[r][c])
{
    int arr1[c][r];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            arr1[j][i]=arr[i][j];
        }
    }
    printf("The transpose of the array is: \n");
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }
}
