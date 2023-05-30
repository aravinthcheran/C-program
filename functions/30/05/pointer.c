#include<stdio.h>
int main()
{
    float x=15.5;
    float *ptr=&x;
    printf("The address of x is %f\n",&x);
    printf("The address of x is %f\n",ptr);
    printf("The values are %f  %f",x,*ptr);
}