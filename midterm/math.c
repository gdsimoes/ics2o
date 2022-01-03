#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x = get_int("First number: ");
    int y = get_int("Second number: ");

    // Addition
    printf("x + y: %i\n", x + y);

    // Subtraction
    printf("x - y: %i\n", x - y);

    // Multiplication
    printf("x * y: %i\n", x * y);

    // Division
    printf("x / y: %f\n", (float) x / (float) y);
}