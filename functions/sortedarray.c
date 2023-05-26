#include<stdio.h>
#define MAX 100
int main()
void sort(int arr[],int n);
{
    int arr[MAX],i,n;
    printf("Enter the no. of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the element:");
        scanf("%d",&arr[i]);
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
                    c=a[i];
                    a[i]=a[j];
                    a[j]=c;
                }
            }
        }
        printf("The sorted array is:{");
        for(int i=0;i<n;i++)
        {
            printf("%d,"&arr[i]);
        }
        printf("{\n");
    }
}
