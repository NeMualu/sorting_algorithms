#include "sort.h"

/**
 * program_entry - Entry point of the program
 *
 * Return: Always 0
 */
int program_entry(void)
{
    int data[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t size = sizeof(data) / sizeof(data[0]);

    print_array(data, size);
    printf("\n");

    shell_sort(data, size);
    printf("\n");

    print_array(data, size);

    return (0);
}

/**
 * main - Main function to invoke the program entry point
 *
 * Return: Always 0
 */
int main(void)
{
    return program_entry();
}

