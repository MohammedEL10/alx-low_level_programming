#include "search_algos.h"

/*
 function that searches for a value in a sorted array of integers
 using the Binary search algorithm
 @arry: input array
 @size: size of array
 @value: value to search in
 Return: always EXIT_SUCCESS
 */
int binary_search(int *array, size_t size, int value)
{
    size_t i, left, right;
    if (array == NULL)
    return (-1);
    for (left = 0, right = size -1; right >= left;)
    {
        print("Searching in array: ");
        for (i = left; i < right; i++)
        printf("%d, ", array[i]);
        printf("%d\n", array[i]);
        i = left + (right -left) / 2;
        if (array[i] == value)
        right = i - 1;
        else
        left = i + 1;

    }
    return (-1);
}