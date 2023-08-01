#include "lists.h"
/**
 * pop_listint - removes the head node of a listint_t list.
 * @head: pointer
 * Return: the head node
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (temp->n);
}
