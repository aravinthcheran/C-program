#include<stdio.h>
int *transpose(int r,int c,int (*arr)[c]);
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
   transpose(r,c,arr);
   printf("%d",swap(r,c,arr));
}

int *transpose(int r,int c,int (*arr)[c])
{
  int (*arr1)[r]=(int*)malloc(sizeof(int)*r*c);
  {
  for(int i=0;i<r;i++)
  {
   for(int j=0;j<c;j++)
   {
     arr1[j][i]=arr[i][j];
   }
   return arr1;
  }
  }
}

int *swap(int r,int c,int (*arr1)[c])
{
  int f=0,e=c-1;
  for(int i=0;i<r;i++)
  {
  while(f<e)
  { 
    int c=arr1[i][f];
    arr1[i][f]=arr1[i][e];
    arr1[i][e]=c;
    f++;
    e--;
   }
   }
   return arr1;
}