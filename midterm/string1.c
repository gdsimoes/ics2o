#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string salutation = "Hi!";

    // Print first character
    printf("%c\n", salutation[0]);

    // Print first character as an int
    printf("%i\n", salutation[0]);

    // Print whole string
    printf("%s\n", salutation);
}
