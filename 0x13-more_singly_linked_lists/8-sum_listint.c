#include "lists.h"
/**
 * sum_listint - sums all the data (n) of a listint_t
 * @head: head
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int value = 0;

	while (head != NULL)
	{
		value += head->n;
		head = head->next;
	}
	return (value);
}
