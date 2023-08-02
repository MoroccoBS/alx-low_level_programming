#include "lists.h"

/**
 * reverse_listint - reverses a list
 * @head: pointer to the head of the list
 * Return: pointer to the new head of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *temp = NULL;

	while (*head != NULL)
	{
		temp = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = temp;
	}

	*head = previous;
	return (*head);
}
