/*Write a function that accepts a string and returns the longest palindrome substring in the string.*/
#include<stdio.h>
#include<string.h>
#define MAX_LENGTH 100

int isPalindrome(char str[], int start, int end)
{
    while (start < end)
    {
        if (str[start] != str[end])
            return 0;
        start++;
        end--;
    }
    return 1;
}

char* longestPalindromeSubstring(char str[])
{
    int len = strlen(str);
    int maxLength = 0;
    int start = 0;

    for (int i = 0; i < len; i++)
    {
        for (int j = i; j < len; j++)
        {
            if (isPalindrome(str, i, j))
            {
                int currentLength = j - i + 1;
                if (currentLength > maxLength)
                {
                    maxLength = currentLength;
                    start = i;
                }
            }
        }
    }

    char* result = malloc(sizeof(char) * (maxLength + 1));
    strncpy(result, str + start, maxLength);
    result[maxLength] = '\0';

    return result;
}

int main()
{
    char str[MAX_LENGTH];
    printf("Enter the string: ");
    scanf("%s", str);

    char* longestPalindrome = longestPalindromeSubstring(str);

    printf("The longest palindrome substring is: %s\n", longestPalindrome);

    free(longestPalindrome);

    return 0;
}
