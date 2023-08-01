#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of the list
 * @head: head of the list
 * @n: integer
 * Return: the address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	else
	{
		new->next = *head;
		*head = new;
		return (*head);
	}
}
