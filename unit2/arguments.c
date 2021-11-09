#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    // Print the number of arguments
    printf("argc: %i\n", argc);

    // Print all arguments one per line
    for (int i = 0; i < argc; i++)
    {
        printf("argv[%i]: %s\n", i, argv[i]);
    }
}