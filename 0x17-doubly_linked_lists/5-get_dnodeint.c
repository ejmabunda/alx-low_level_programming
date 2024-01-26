#include <stdlib.h> /* NULL */

#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t list
 * @head: points to the head
 * @index: node's position
 *
 * Return: node at the specified position, NULL if it
 * doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	unsigned int count;

	node = head;
	count = 0;

	while (node != NULL)
	{
		if (count == index)
			return (node);
		count++;
		node = node->next;
	}
	return (NULL);
}
