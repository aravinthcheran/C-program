#include<stdio.h>
void print()
{
    static int i=5;
    printf("%d\n",++i);
}
int main()
{
    for(int i=0;i<10;i++)
        print();
}