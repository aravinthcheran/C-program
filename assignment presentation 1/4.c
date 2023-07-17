#include<stdio.h>
#include<string.h>
#define MAX_LENGTH 100
int palindrome(char *str, int start, int end)
{
    while (start < end)
    {
        if (str[start] != str[end])
            break;
        start++;
        end--;
    }
    if(start >= end)
        return 1;
    else
        return 0;
}
char* longestpalindrome(char *str)
{
    char result[MAX_LENGTH];
    int len = strlen(str);
    int maxlength = 0;
    int start = 0;
    for (int i = 0; i < len; i++)
    {
        for (int j = i; j < len; j++)
        {
            if (palindrome(str, i, j))
            {
                int currentlength = j - i + 1;
                if (currentlength > maxlength)
                {
                    maxlength = currentlength;
                    start = i;
                }
            }
        }
    }
    strncpy(result, str + start, maxlength);        //syntax for strncpy is strncpy(destination, source, length)
    result[maxlength] = '\0';
    return result;
}
int main()
{
    char str[MAX_LENGTH];
    printf("Enter the string: ");
    scanf("%s", str);
    char* longest = longestpalindrome(str);
    printf("\nThe longest palindrome substring is: %s\n", longest);
    return 0;
}