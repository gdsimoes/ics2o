#include <stdio.h>

void print_array(int arr[], int size);
void swap(int *a, int *b);

int linear_search(int arr[], int size, int elem);
int binary_search(int arr[], int size, int elem);

void bubbleSort(int arr[], int size);

int main(void)
{
    int sorted[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int unsorted[] = {6, 3, 8, 5, 2, 7, 4, 1};

    printf("%i\n", binary_search(sorted, 8, 7));
    for (int i = 1; i <= 8; i++)
    {
        printf("%i\n", binary_search(sorted, 8, i));
    }

    print_array(sorted, 8);
    print_array(unsorted, 8);

    int a = 1;
    int b = 2;

    swap(&a, &b);

    printf("%i %i\n", a, b);


}

// This function prints all elements of an array in a pretty way
void print_array(int arr[], int size)
{
    if (size == 0)
    {
        printf("[]\n");
    }
    else
    {
        printf("[");
        for (int i = 0; i < size - 1; i++)
        {
            printf("%i, ", arr[i]);
        }
        printf("%i]\n", arr[size - 1]);
    }
}

void swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;

}

int linear_search(int arr[], int size, int elem)
{
    for (int i = 0; i < size; i++)
    {
        // If found return that index
        if (arr[i] == elem)
        {
            return i;
        }
    }

    // Since -1 is never an index it is a good value to signal that the element wasn't found
    return -1;
}

int binary_search(int arr[], int size, int elem)
{
    // a and b representing the beginning and the end (not including b)
    int a = 0;
    int b = size;

    // We are going to continue searching while the beginning is less than the end
    while (a < b)
    {
        // This is integer division
        const int middle = (a + b)/2;

        // If found just return the index
        if (arr[(a + b)/2] == elem)
        {
            return (a + b)/2;
        }
        // Otherwise restrict the search to the correct half of the terminal
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

void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {

    }
    return;
}