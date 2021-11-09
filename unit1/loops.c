#include <stdio.h>

void my_function(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("I am inside a function!\n");
    }
}

int main()
{
    int i = 0;
    while (i < 3)
    {
        printf("Repeating using while\n");
        i++;
    }

    for (int j = 0; j < 4; j++)
    {
        printf("Repeating using for\n");
    }

    my_function(5);
}