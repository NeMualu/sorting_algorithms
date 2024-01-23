#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * build_doubly_linked_list - Constructs a doubly linked list from an integer array.
 *
 * @arr: The array to be transformed into a doubly linked list.
 * @len: The length of the array.
 *
 * Return: Pointer to the head of the newly created list. NULL if creation fails.
 */
listint_t *build_doubly_linked_list(const int *arr, size_t len)
{
    listint_t *head = NULL;
    listint_t *new_node;
    int *node_data;

    while (len--)
    {
        new_node = malloc(sizeof(*new_node));
        if (!new_node)
            return (NULL);
        node_data = (int *)&new_node->n;
        *node_data = arr[len];
        new_node->next = head;
        new_node->prev = NULL;
        if (head)
            head->prev = new_node;
        head = new_node;
    }
    return (head);
}

/**
 * main - Main function as the program's entry point.
 *
 * Return: 0 on success, non-zero value otherwise.
 */
int main(void)
{
    listint_t *list;
    int values[] = {39, 31, 19, 42, 12};
    size_t size = sizeof(values) / sizeof(values[0]);

    list = build_doubly_linked_list(values, size);
    if (!list)
        return (1);
    print_list(list);
    printf("\n");
    cocktail_sort_list(&list);
    printf("\n");
    print_list(list);
    return (0);
}

