#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Starting point of the program
 *
 * Return: Zero on successful execution
 */
int main(void)
{
    int data[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t length = sizeof(data) / sizeof(data[0]);

    // Display the array before sorting
    print_array(data, length);
    printf("\n");

    // Perform bubble sort
    bubble_sort(data, length);
    printf("\n");

    // Display the array after sorting
    print_array(data, length);

    return 0;
}

