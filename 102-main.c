#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Starting point of the program.
 *
 * Return: 0 on successful execution.
 */
int main(void)
{
    // Define an array of integers for sorting
    int data_set[] = {20, 45, 75, 90, 15, 60, 88, 100, 77, 5};
    // Calculate the number of elements in the array
    size_t array_length = sizeof(data_set) / sizeof(data_set[0]);

    // Display the array before sorting
    print_array(data_set, array_length);
    printf("\n");
    // Apply the counting sort algorithm
    counting_sort(data_set, array_length);
    printf("\n");
    // Display the array after sorting
    print_array(data_set, array_length);
    return (0);
}

