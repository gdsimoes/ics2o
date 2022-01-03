#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x = get_int("Enter number: ");

    if (x > 0)
    {
        printf("That's positive!\n");
    }
    else if (x < 0)
    {
        printf("That's negative!\n");
    }
    else
    {
        printf("It is like the number zero... empty, yet holding infinite potential within itself.\n");
    }

    x = get_int("Enter another number: ");
    if (x == 17)
    {
        printf("Lucky!\n");
    }
    else if (x <= 51)
    {
        printf("Not that great!\n");
    }
    else
    {
        printf("That's great!\n");
    }
}