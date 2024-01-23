#include "sort.h"

/**
 * exchange_nodes - Exchanges two nodes in a doubly linked list
 * @node1: pointer to the first node
 * @node2: pointer to the second node
 *
 * Return: None
 */
void exchange_nodes(listint_t *node1, listint_t *node2)
{
    if (node1->prev)
        node1->prev->next = node2;
    if (node2->next)
        node2->next->prev = node1;
    node1->next = node2->next;
    node2->prev = node1->prev;
    node1->prev = node2;
    node2->next = node1;
}

/**
 * sort_doubly_linked_list - Performs insertion sort on a doubly linked list
 * @head_ref: double pointer to the head of the list
 *
 * Return: None
 */
void sort_doubly_linked_list(listint_t **head_ref)
{
    listint_t *current, *previous;

    if (!head_ref || !*head_ref || !(*head_ref)->next)
        return;
    current = (*head_ref)->next;
    while (current)
    {
        previous = current;
        current = current->next;
        while (previous && previous->prev)
        {
            if (previous->prev->n > previous->n)
            {
                exchange_nodes(previous->prev, previous);
                if (!previous->prev)
                    *head_ref = previous;
                print_list((const listint_t *)*head_ref);
            }
            else
                previous = previous->prev;
        }
    }
}

