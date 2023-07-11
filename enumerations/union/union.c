#include<stdio.h>
union new
{
    int a;
    char b[4];

};
int main()
{
    union new n;
    printf("Enter a number: ");
    scanf("%d",&n.a);
    printf("The number is: %d\n",n.a);
    for(int i=0;i<4;i++)
    {
        printf("%d ",n.b[i]);
    }
}