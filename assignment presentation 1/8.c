/*Create a function that accepts two dynamically allocated arrays of integers and merges them into
a new sorted array. The function should return a pointer to the merged array, and it should handle
the deallocation of the input arrays.*/
#include<stdio.h>
#include<stdlib.h>
int merge(int n1,int n2, int *arr1, int *arr2);
int main()
{
    printf("Enter the size of the first array: ");
    int n1;
    scanf("%d",&n1);
    int *arr1=malloc(sizeof(int)*n1);
    printf("Enter the elements of the first array: ");
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the size of the second array: ");
    int n2;
    scanf("%d",&n2);
    int *arr2=malloc(sizeof(int)*n2);
    printf("Enter the elements of the second array: ");
    for(int i=0;i<n2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    merge(n1,n2,arr1,arr2);
}
int merge(int n1,int n2, int *arr1, int *arr2)
{
    int *arr3=malloc(sizeof(int)*(n1+n2));
    for(int i=0;i<n1;i++)
    {
        arr3[i]=arr1[i];
    }
    for(int i=0;i<n2;i++)
    {
        arr3[i+n1]=arr2[i];
    }
    for(int i=0;i<n1+n2;i++)
    {
        for(int j=i+1;j<n1+n2;j++)
        {
            if(arr3[i]>arr3[j])
            {
                int temp=arr3[i];
                arr3[i]=arr3[j];
                arr3[j]=temp;
            }
        }
    }
    printf("The merged array is: ");
    for(int i=0;i<n1+n2;i++)
    {
        printf("%d ",arr3[i]);
    }
    free(arr1);
    free(arr2);
}