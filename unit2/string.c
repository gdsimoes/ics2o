// Ways to loop through a string

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Enter string: ");

    // Print a string one character at a time using three different techniques

    // The character '\0' has ASCII value equal to zero. All strings have this as their final value.
    for (int i = 0; s[i] != '\0'; i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");

    // This is inneficient because we are calling strlen at every iteration
    for (int i = 0; i < strlen(s); i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");

    // This is efficient because we are only calling strlen in the beginning
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");
}