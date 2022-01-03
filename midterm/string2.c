#include <stdio.h>

#define LENGTH 4

int main(void)
{
    // The LENGTH can be ommited here
    char salutation[LENGTH] = "Hi!";

    // Print all elements of the array one by one as integers
    for (int i = 0; i < LENGTH; i++)
    {
        printf("%i\n", salutation[i]);
    }
}