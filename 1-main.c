#include "sort.h"

/**
 * generate_listint - Creates a doubly linked list from an array of integers
 *
 * @array: Array to convert to a doubly linked list
 * @size: Size of the array
 *
 * Return: Pointer to the first element of the created list. NULL on failure
 */
listint_t *generate_listint(const int *array, size_t size)
{
    listint_t *list;
    listint_t *node;
    int *temp;

    list = NULL;
    while (size--)
    {
        node = malloc(sizeof(*node));
        if (!node)
            return (NULL);
        temp = (int *)&node->n;
        *temp = array[size];
        node->next = list;
        node->prev = NULL;
        list = node;
        if (list->next)
            list->next->prev = list;
    }
    return (list);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    listint_t *linked_list;
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t size = sizeof(array) / sizeof(array[0]);

    linked_list = generate_listint(array, size);
    if (!linked_list)
        return (1);

    print_list(linked_list);
    printf("\n");

    insertion_sort_list(&linked_list);
    printf("\n");

    print_list(linked_list);
    check_list(linked_list);

    return (0);
}

