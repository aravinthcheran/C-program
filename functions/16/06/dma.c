#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,n;
    p=(int *)calloc(n,sizeof(int));
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    printf("The elements are: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(p+i));
    }
    int m;
    printf("The new size of the array is: ");
    scanf("%d",&m);
    p=(int *)realloc(p,(sizeof(int)*n)-(sizeof(int)*m));
    printf("The elements are: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(p+i));
    }
    int o;
    printf("The new size of the array is: ");
    scanf("%d",&o);
    p=(int *)realloc(p,(sizeof(int)*m)+(sizeof(int)*o));
    printf("The elements are: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(p+i));
    }
    
}