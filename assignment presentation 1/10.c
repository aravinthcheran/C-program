#include <stdio.h>
#include <stdlib.h>

float* average(int r, int c, float (*arr)[c]);

int main()
{
    int r, c;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);

    float (*arr)[c] = malloc(sizeof(float) * r * c);

    printf("Enter the elements of the array: ");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%f", &arr[i][j]);
        }
    }

    printf("The average of each column is: ");
    float* avg = average(r, c, arr);
    for (int i = 0; i < c; i++)
    {
        printf("%f ", avg[i]);
    }

    free(arr);
    free(avg);

    return 0;
}

float* average(int r, int c, float (*arr)[c])
{
    float* avg = malloc(sizeof(float) * c);

    for (int i = 0; i < c; i++)
    {
        float sum = 0;
        for (int j = 0; j < r; j++)
        {
            sum += arr[j][i];
        }
        avg[i] = sum / r;
    }

    return avg;
}
