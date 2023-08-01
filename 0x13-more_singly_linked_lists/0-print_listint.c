#include "lists.h"

/**
 * size_t print_listint - prints all the elements of a listint_t
 * @h: points to node'
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}