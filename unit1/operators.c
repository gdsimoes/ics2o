#include <stdio.h>
#include <cs50.h>

// Operators: + - * / %
int main()
{
    int x = get_int("x: ");

    int y;
    y = get_int("y: ");

    // Addition
    printf("Addition: %i\n", x + y);

    // Subtraction
    printf("Subtraction: %i\n", x - y);

    // Multiplication
    printf("Multiplication: %i\n", x * y);

    // Division
    printf("Division: %f\n", (float) x / y);

    // Remainder
    printf("Remainder: %i\n", x % y);

}