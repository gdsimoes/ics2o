#include <stdio.h>
#include <cs50.h>

int main()
{
    float grade = get_float("Enter grade percentage (without '%%' ): ");

    if (grade >= 80)
    {
        printf("A\n");
    }
    else if (grade >= 70)
    {
        printf("B\n");
    }
    else if (grade >= 60)
    {
        printf("C\n");
    }
    else if (grade >= 50)
    {
        printf("D\n");
    }
    else
    {
        printf("F\n");
    }
}