#include<stdio.h>
int main()
{
    char x[10];
    scanf("%[^(*-+=/%)]",x);
    printf("%s",x);
}