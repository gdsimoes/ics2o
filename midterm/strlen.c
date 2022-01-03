#include <stdio.h>
#include <cs50.h>

int mystrlen(string str);

int main(void)
{
    string str = get_string("Enter a string: ");

    printf("Length of the string: %i\n", mystrlen(str));
}

int mystrlen(string str)
{
    // TODO
}