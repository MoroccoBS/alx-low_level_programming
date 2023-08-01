#include "lists.h"
/**
 * pop_listint - removes the head node of a listint_t list.
 * @head: pointer
 * Return: the head node
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int value;

	if (*head == NULL)
	{
		return (0);
	}
	temp = *head;
	*head = (*head)->next;
	value = temp->n;
	free(temp);
	return (value);
}
