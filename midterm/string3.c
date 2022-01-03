// Different ways of looping through strings

#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string str = get_string("Enter a string: ");

    printf("First loop:\n");
    for (int i = 0; i < strlen(str); i++)
    {
        printf("%c\n", str[i]);
    }
    printf("\n");

    printf("Second loop:\n");
    for (int i = 0, n = strlen(str); i < n; i++)
    {
        printf("%c\n", str[i]);
    }
    printf("\n");

    printf("Third loop:\n");
    for (int i = 0; str[i] != '\0'; i++)
    {
        printf("%c\n", str[i]);
    }
    printf("\n");
}