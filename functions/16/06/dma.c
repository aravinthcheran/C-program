#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,n;
    p=(int *)malloc(sizeof(int)*n);
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    printf("The elements are: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(p+i));
    }
}