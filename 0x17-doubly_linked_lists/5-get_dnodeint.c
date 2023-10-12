#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t list
 * @head: pointer to the head of the list
 * @index: index of the node
 * Return: the nth node of a dlistint_t list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current = head;

	if (head == NULL)
	{
		return (NULL);
	}

	while (current != NULL)
	{
		if (count == index)
		{
			return current;
		}
		current = current->next;
		count++;
	}

	return NULL;
}

int main(void)
{
	dlistint_t *head;
	dlistint_t *node;

	head = NULL;
	add_dnodeint_end(&head, 0);
	add_dnodeint_end(&head, 1);
	add_dnodeint_end(&head, 2);
	add_dnodeint_end(&head, 3);
	add_dnodeint_end(&head, 4);
	add_dnodeint_end(&head, 98);
	add_dnodeint_end(&head, 402);
	add_dnodeint_end(&head, 1024);
	print_dlistint(head);
	node = get_dnodeint_at_index(head, 5);
	printf("%d\n", node->n);
	free_dlistint(head);
	head = NULL;
	return (EXIT_SUCCESS);
}