#include <stdlib.h>  /* NULL */

#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * of a dlistint-t linked list.
 * @head: points to the head
 * @index: position of node to be deleted
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count;
	dlistint_t *current, *next;

	/* handle special case; delete first node */
	if (index == 0)
	{
		if (*head == NULL)
			return (-1);

		*head = (*head)->next;
		return (1);
	}

	/* go to the specified positon */
	current = *head;
	count = 0;
	while (count != index - 1)
	{
		if (current == NULL)
			return (-1);

		current = current->next;
		count++;
	}

	next = current->next;
	current->next = next->next;

	return (1);
}
