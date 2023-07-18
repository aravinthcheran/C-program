#include<stdio.h>
int fibo(int n)
{
    if(n==1)
    {
        return 0;
    }
    else if(n==2)
    {
        return 1;
    }
    else
    {
        return fibo(n-1)+fibo(n-2);
    }
}
int main()
{
    int n,p;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    int fib[n];
    for(int i=0;i<n;i++)
    {
        fib[i]=fibo(i+1);
    }
    FILE *fp;
    fp=fopen("fibo.txt","w");
    for(int i=0;i<n;i++)
    {
        fprintf(fp,"%d ",fib[i]);
    }
    fclose(fp);
    fp=fopen("fibo.txt","r");
    if(fp==NULL)
    {
        printf("File not found");
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        fscanf(fp,"%d ",&p);
        printf("%d ",p);
    }
    
}