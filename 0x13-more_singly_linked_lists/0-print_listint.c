#include "list.h"

/**
 * size_t print_listint - prints all the elements of a listint_t
 * @h: points to node'
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
    int i = 0;

    while (h != NULL)
    {
        if (h->n == 0)
        {
            printf("-> %d elements\n", h->n);
        }
        else
        {
            printf("%d\n", h->n);
        }
        i++;
        h = h->next;
    }
    return (i);
}