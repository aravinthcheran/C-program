#include<stdio.h>
#define MAX 100
void sort(int arr[],int n);
int main()
{
    int arr[MAX],i,n;
    printf("Enter the no. of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the element:");
        scanf("%d",&arr[i]);
    }
    printf("%d",arr[0]);
    sort(arr,n);
}
void sort(int arr[],int n)
{   
    int c;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if (arr[i]>arr[j])
            {
                c=arr[i];
                arr[i]=arr[j];
                arr[j]=c;
            }
        }
    }
    printf("The sorted array is:{");
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
        if(i<n-1)
            printf(",");
        else
            printf("}");
    }
}

