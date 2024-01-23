#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - The starting point of the program.
 *
 * Return: Zero to indicate successful execution.
 */
int main(void)
{
    // Define the number of elements in the array
    size_t num_elements = 50;
    // Generate a random array with elements up to 100
    int *random_array = rand_array(num_elements, 100);

    // Display the unsorted array
    print_array(random_array, num_elements);
    printf("\n");
    // Perform counting sort on the array
    counting_sort(random_array, num_elements);
    printf("\n");
    // Display the sorted array
    print_array(random_array, num_elements);
    // Verify the sorted array
    check_array(random_array, num_elements);
    
    return (0);
}

