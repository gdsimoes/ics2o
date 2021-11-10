#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get integers from user
    int x = get_int("x: ");
    int y = get_int("y: ");
    
    float z;

    // Integer division
    z = x / y;
    printf("%f\n", z);
    
    // Floating point division
    z = (float) x / (float) y;
    printf("%f\n", z);
}

