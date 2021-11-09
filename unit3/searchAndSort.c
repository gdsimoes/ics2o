#include <stdio.h>

int linear_search(int arr[], int size, int elem);
int binary_search(int arr[], int size, int elem);

void bubbleSort(int arr[]);

int main(void)
{
    int sorted[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int unsorted[] = {6, 3, 8, 5, 2, 7, 4, 1};

    printf("%i\n", binary_search(sorted, 8, 7));
    for (int i = 1; i <= 8; i++)
    {
        printf("%i\n", binary_search(sorted, 8, i));
    }


}

int linear_search(int arr[], int size, int elem)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == elem)
        {
            return i;
        }
    }

    return -1;
}

int binary_search(int arr[], int size, int elem)
{
    int a = 0;
    int b = size;

    while (b - a > 0)
    {
        if (arr[(a + b)/2] == elem)
        {
            return (a + b)/2;
        }
        else if (arr[(a + b)/2] > elem)
        {
            b = (a + b)/2;
        }
        else
        {
            a = (a + b)/2 + 1;
        }
    }

    return -1;
}

void sort(int arr[])
{
    return;
}