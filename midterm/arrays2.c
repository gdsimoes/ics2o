#include <stdio.h>
#include <cs50.h>

#define SIZE 3

int main (void)
{
    int scores[SIZE];

    // Getting the values
    for (int i = 0; i < SIZE; i++)
    {
        scores[i] = get_int("score[%i]: ", i);
    }

    // Getting the sum
    int sum = 0;
    for (int i = 0; i < SIZE; i++)
    {
        sum += scores[i];
    }

    // Printing the average
    printf("Average: %f\n", (float) sum / SIZE);


}