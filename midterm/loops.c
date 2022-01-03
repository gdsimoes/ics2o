#include <stdio.h>

int main(void)
{
    printf("This is the while loop:\n");
    int i = 0;
    while (i < 3)
    {
        printf("i: %i\n", i);
        i++;
    }
    printf("\n");

    printf("This is the for loop:\n");
    for (int j = 0; j < 3; j++)
    {
        printf("j: %i\n", j);
    }
}