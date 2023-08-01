#include "lists.h"
/**
 * free_listint - free list
 * @head: pointer
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		temp = head;
		free(head->n);
		head = head->next;
		free(temp);
	}
}
