#include "list.h"
/**
 * listint_len - length of the list
 * @h: points to node
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
    unsigned int i = 0;
    while (h != NULL)
    {
        h = h->next;
        i++;
    }
    return (i);
}