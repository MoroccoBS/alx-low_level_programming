#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a node at a given position
 * @head: head
 * @idx: index
 * @n: integer
 * Return: the address of the new element
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;

	if (head == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (head == NULL || idx == 0)
	{
		new->next = *head;
		*head = new;
		return 0;
	}
	new->next = get_nodeint_at_index(*head, idx - 1);
	new->next = new;
	return (*head);
}
