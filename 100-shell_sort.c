#include "sort.h"

/**
 * calculate_max_interval - Calculates the maximum interval based on Knuth's formula
 * @array_size: The size of the array
 *
 * Return: The calculated gap size
 */
size_t calculate_max_interval(size_t array_size)
{
    size_t interval = 1;

    while (interval < array_size)
        interval = interval * 3 + 1;

    return (interval - 1) / 3;
}

/**
 * shell_sort - Implementation of shell sort algorithm
 * @array: Array to be sorted
 * @size: Size of the array
 *
 * Return: Nothing
 */
void shell_sort(int *array, size_t size)
{
    size_t gap, i, j;
    int temporary;

    if (array == NULL || size < 2)
        return;

    for (gap = calculate_max_interval(size); gap > 0; gap = (gap - 1) / 3)
    {
        for (i = gap; i < size; i++)
        {
            temporary = array[i];
            for (j = i; j >= gap && array[j - gap] > temporary; j -= gap)
            {
                array[j] = array[j - gap];
            }
            array[j] = temporary;
        }
        print_array(array, size);
    }
}

