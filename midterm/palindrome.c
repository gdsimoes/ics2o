#include <stdio.h>
#include <cs50.h>
#include <string.h>

bool isPalindrome(string str);

int main(void)
{
    if (isPalindrome("hannah"))
    {
        printf("hannah is a palindrome!\n");
    }

    if (!isPalindrome("guilherme"))
    {
        printf("guilherme is not a palindrome!\n");
    }
}

bool isPalindrome(string str)
{

}