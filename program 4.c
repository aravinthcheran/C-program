#include<stdio.h>
int main()
{
    int arr[3][3]={1,1,1,1,1,0,1,0,1};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(arr[i][j]==1)
            {
                //if(j<=1)
                if(arr[i][j+1]==1)
                {
                    printf("[%d][%d]=[%d][%d]\n",i,j,i,j+1);
                }
                if(arr[i+1][j]==1)
                {
                    printf("[%d][%d]=[%d][%d]\n",i,j,i+1,j);
                }
            }
        }
    }
}