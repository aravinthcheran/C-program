/*Print a pattern of numbers from  to  as shown below. Each of the numbers is separated by a single space.

                            4 4 4 4 4 4 4  
                            4 3 3 3 3 3 4   
                            4 3 2 2 2 3 4   
                            4 3 2 1 2 3 4   
                            4 3 2 2 2 3 4   
                            4 3 3 3 3 3 4   
                            4 4 4 4 4 4 4  */
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n][n];
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==0||j==0||i==n-1||j==n-1)
            {
                a[i][j]=n;
            }
            else if(i==j)
            {
                a[i][j]=n-i;
            }
            else if(i+j==n-1)
            {
                a[i][j]=n-j;
            }
            else if(i<j&&i+j<n-1)
            {
                a[i][j]=n-i-1;
            }
            else if(i>j&&i+j>n-1)
            {
                a[i][j]=n-j-1;
            }
            else if(i>j&&i+j<n-1)
            {
                a[i][j]=n-j-1;
            }
            else if(i<j&&i+j>n-1)
            {
                a[i][j]=n-i-1;
            }
        }
    }
}