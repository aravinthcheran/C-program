/*Write a function that accepts a pointer to a 2D array of integers and rotates the array 90 degrees
clockwise in-place.*/
#include<stdio.h>
#include<stdlib.h>
int rotate(int r,int c,int (*arr)[c]);
int main()
{
    printf("Enter the number of rows: ");
    int r;
    scanf("%d",&r);
    printf("Enter the number of columns: ");
    int c;
    scanf("%d",&c);
    int (*arr)[c]=malloc(sizeof(int)*r*c);
    printf("Enter the elements of the array: ");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    rotate(r,c,arr);
}
int rotate(int r,int c, int (*arr)[c])
{
    int arr1[c][r];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            arr1[j][i]=arr[i][j];
        }
    }
    for(int i=0;i<c;i++)
    {
        int f=0,l=r-1;
        while(f<l)
        {
            int temp=arr1[i][f];
            arr1[i][f]=arr1[i][l];
            arr1[i][l]=temp;
            f++;
            l--;
        }
    }
    printf("The rotated array is: \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            arr[i][j]=arr1[i][j];
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}