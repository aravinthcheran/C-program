#include<stdio.h>
#include<stdlib.h>

void rotate(int r, int c, int (*arr)[c]);

int main()
{
    printf("Enter the number of rows: ");
    int r;
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    int c;
    scanf("%d", &c);
    int (*arr)[c] = malloc(sizeof(int) * r * c);
    printf("Enter the elements of the array: \n");
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    rotate(r, c, arr);
    printf("The rotated array is: \n");
    for(int i = 0; i < c; i++)
    {
        for(int j = 0; j < r; j++)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
}

void rotate(int r, int c, int (*arr)[c])
{
    for(int i = 0; i < r; i++)
    {
        for(int j = i + 1; j < c; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    for(int i = 0; i < r; i++)
    {
        int f = 0;
        int l = c - 1;

        while(f < l)
        {
            int temp = arr[i][f];
            arr[i][f] = arr[i][l];
            arr[i][l] = temp;
            f++;
            l--;
        }
    }
}
