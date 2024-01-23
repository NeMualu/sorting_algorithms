#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    // Display the original array
    print_array(array, n);
    printf("\n");

    // Perform merge sort on the array
    merge_sort(array, n);

    printf("\n");

    // Display the sorted array
    print_array(array, n);

    return (0);
}

