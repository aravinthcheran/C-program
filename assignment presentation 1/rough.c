#include<stdio.h>
int *avg(int r,int c,int (*arr)[c]);
int main()
{
  printf("enter the no.of rows:");
  int r;
  scanf("%d",&r);
  printf("enter the no.of columns:");
  int c;
  scanf("%d",&c);
  int (*arr)[c]=malloc(sizeof(int)*r*c);
  for(int i=0;i<r;i++)
  {
   for(int j=0;j<c;j++)
   {
    scanf("%d",&arr[i][j]);
   }
  }
  int *a=avg(r,c,arr);
  printf("the average of each column is:");
    for(int i=0;i<c;i++)
    {
     printf("%d ",a[i]);
  }
}

int *avg(int r,int c,int (*arr)[c])
{  
    int *arr1=malloc(c*sizeof(int));
    int sum=0;
    for(int i=0;i<c;i++)
    {
     for(int j=0;j<r;j++)
     {
      sum=sum+arr[j][i];
     }
    arr1[i]=sum/r;
    sum=0;
    }
    return arr1;
}