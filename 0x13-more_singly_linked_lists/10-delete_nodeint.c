#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
 * @index: index
 * @head: head
 * Return: void
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int idx;
	listint_t *current;

	for (idx = 0, current = *head; current != NULL; idx++, current = current->next)
	{
		if (idx + 1 == index)
		{
			current->next = current->next->next;
			break;
		}
	}
	return (0);
}
