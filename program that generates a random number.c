#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,num;
    while(i!=num)
    {
        printf("Enter the number: ");
        scanf("%d",&i);
        num=rand()%100;
        printf("Random number: %d\n",num);
        printf("numbers doesnot match\n");
    }
    printf("numbers match\n");
}