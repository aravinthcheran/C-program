#include<stdio.h>
int main()
{
    int arr[][3]={1,2,3,4,5,6,7,8};
    print1(arr);
}
void print1(int arr[][3])
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\n",arr[i][j]);
        }
    }
}