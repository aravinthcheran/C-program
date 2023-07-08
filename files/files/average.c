//to calculate the average of n numbers
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    FILE *fp;
    fp=fopen("num.txt","r");
    int n,i=0;
    float sum=0;
    while (fscanf(fp, "%d", &n) == 1)
    {
        i++;
        sum+=n;
    }
    fclose(fp);
    printf("Average of the numbers is %f",sum/i);
}