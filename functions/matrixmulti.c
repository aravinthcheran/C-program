#include<stdio.h>
int mult(int a[3][3],int b[3][3],int c[3][3])
{
    int i,j,k;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            c[i][j]=0;
            for(k=0;k<3;k++)
                c[i][j]+=a[i][k]*b[k][j];
}
int main()
{
    int a[3][3],b[3][3],c[3][3],i,j;
    printf("Enter the elements of matrix A:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of matrix B:\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&b[i][j]);
    mult(a,b,c);
    printf("The resultant matrix is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d ",c[i][j]);
        printf("\n");
    }
    return 0;
}