#include<stdio.h>
#include<string.h>
#define MAX 100
int arr(char *a[],int n)
{
    for (int i = 0; i < n; i++)
    {
        if(strcmp(a[i],'a')==0)
        {
            printf("postion of a is %d",i);
        }
    }
}
int main()
{
    char a[]={0};
    int n;
    printf("Enter the word:\n");
    scanf("%s",a);
    printf("The word is %s\n",a);
    n=strlen(a);
    printf("The length of the word is %d\n",n);
    char *p=a;
    arr(p,n);
    return 0;
}