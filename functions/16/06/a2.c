//write the program that gets the sentence from the user and stores it dynamically an d finds the length of the sentence using strlen() function
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char *p;
    p=(char *)calloc(500,sizeof(char));
    printf("Enter the sentence: ");
    scanf("%[^\n]s",p);
    printf("The sentence is: %s\n",p);
    printf("The length of the sentence is: %d\n",strlen(p));
}