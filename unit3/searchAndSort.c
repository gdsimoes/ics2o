#include <stdio.h>
#include <stdbool.h>    // stdbool is necessary to use booleans without cs50.h

void print_array(int arr[], int size);
void swap(int *a, int *b);

int linear_search(int arr[], int size, int elem);
int binary_search(int arr[], int size, int elem);

void bubble_sort(int arr[], int size);
void selection_sort(int arr[], int size);
void merge_arrays(int arr1[], int size1, int arr2[], int size2, int result[]);
void merge_sort(int arr[], int size, int result[]);

int main(void)
{
    int sorted[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int unsorted[] = {6, 3, 8, 5, 2, 7, 4, 1};

    printf("Binary search test:\n");
    printf("%i\n", binary_search(sorted, 8, 7));
    for (int i = 1; i <= 8; i++)
    {
        printf("%i\n", binary_search(sorted, 8, i));
    }

    printf("print_array test:\n");
    print_array(sorted, 8);
    print_array(unsorted, 8);

    printf("swap test:\n");
    int a = 1;
    int b = 2;
    swap(&a, &b);
    printf("%i %i\n", a, b);

    // printf("Bubble sort test:\n");
    // bubble_sort(unsorted, 8);
    // print_array(unsorted, 8);
    // bubble_sort(sorted, 8);
    // print_array(sorted, 8);

    // printf("Insertion sort test:\n");
    // selection_sort(unsorted, 8);
    // print_array(unsorted, 8);
    // selection_sort(sorted, 8);
    // print_array(sorted, 8);

    printf("Merge sort test:\n");
    int result[8];
    merge_sort(unsorted, 8, result);
    print_array(result, 8);
    merge_sort(sorted, 8, result);
    print_array(result, 8);
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

void bubble_sort(int arr[], int size)
{
    bool swapped = false;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
        {
            return;
        }
    }
}

void selection_sort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        swap(&arr[i], &arr[min_index]);
    }
}

void merge_arrays(int arr1[], int size1, int arr2[], int size2, int result[])
{
    for (int i = 0, j = 0; i + j < size1 + size2;)
    {
        if (i == size1)
        {
            result[i + j] = arr2[j];
            j++;
        }
        else if (j == size2)
        {
            result[i + j] = arr1[i];
            i++;
        }
        else if (arr1[i] <= arr2[j])
        {
            result[i + j] = arr1[i];
            i++;
        }
        else
        {
            result[i + j] = arr2[j];
            j++;
        }
    }
}

void merge_sort(int arr[], int size, int result[])
{
    if (size == 1)
    {
        result[0] = arr[0];
        return;
    }

    int result1[size / 2];
    int result2[size - size / 2];

    merge_sort(arr, size / 2, result1);
    merge_sort(&arr[size / 2], size - size / 2, result2);
    merge_arrays(result1, size / 2, result2, size - size / 2, result);
}