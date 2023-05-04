#include<stdio.h>
int main()
{
    char x;
    printf("Enter a character: ");
    scanf("%c",&x);
    printf((x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U')?"Vowel":"Consonant");
}