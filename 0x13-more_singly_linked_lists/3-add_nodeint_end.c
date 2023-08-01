#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of the list
 * @head: head of the list
 * @n: integer
 * Return: the address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = *head, *new;

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
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
	return (*head);
}
