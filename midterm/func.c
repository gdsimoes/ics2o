#include <stdio.h>

int sumofsquares(int n);

int main(void)
{
    printf("The answer is: %i\n", sumofsquares(100));
}

int sumofsquares(int n)
{
    return n * (n + 1) / 2;
}