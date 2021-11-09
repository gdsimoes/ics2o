#include <stdio.h>

int main(void)
{
    const int length = 3;

    int array[length];

    array[0] = 17;
    array[1] = 34;
    array[2] = 51;

    // Loop through arrays with for
    printf("FOR:\n");
    for (int i = 0; i < length; i++)
    {
        printf("value: %i\n", array[i]);
    }

    // Loop through arrays with while
    printf("WHILE:\n");
    int i = 0;
    while (i < length)
    {
        printf("value: %i\n", array[i]);
        i++;
    }

    // Loop through arrays with do...while
    printf("DO...WHILE:\n");
    int j = 0;
    do
    {
        printf("value: %i\n", array[j]);
        j++;
    }
    while (j < length);
}