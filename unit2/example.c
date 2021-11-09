#include <stdio.h>

int main(void)
{
    int array[3];

    array[0] = 17;
    array[1] = 34;
    array[2] = 51;

    for (int i = 0; i < 3; i++)
    {
        printf("FOR: %i\n", array[i]);
    }

    int i = 0;
    while (i < 3)
    {
        printf("WHILE: %i\n", array[i]);
        i++;
    }

    int j = 0;
    do
    {
        printf("DO...WHILE: %i\n", array[j]);
        j++;
    }
    while (j < 3);

}