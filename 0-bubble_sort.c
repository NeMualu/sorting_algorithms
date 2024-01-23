#include "sort.h"

/**
 * bubble_sort - Sorts an integer array using the bubble sort technique
 *
 * @array: The integer array to be sorted
 * @size: The number of elements in the array
 */
void bubble_sort(int *array, size_t size)
{
    int swap;
    size_t index, j;

    // Return if array is NULL or size is zero
    if (!array || size == 0)
        return;

    for (index = 0; index < size - 1; index++)
    {
        for (j = 0; j < size - index - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                // Swapping elements
                swap = array[j];
                array[j] = array[j + 1];
                array[j + 1] = swap;

                // Call to print the array after each swap
                print_array(array, size);
            }
        }
    }
}

