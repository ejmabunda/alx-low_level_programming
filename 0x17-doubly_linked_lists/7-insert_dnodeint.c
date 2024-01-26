#include <stdlib.h>  /* NULL */

#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given
 * position.
 * @h: points to the head
 * @idx: position of new node
 * @n: integer
 *
 * Return: the addresss of the new node, NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp, *current;
	unsigned int count;

	/* allocate memory for the new node, and initialize it */
	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	/* handle special case; add to beginning of list */
	if (idx == 0)
	{
		(*h)->prev = new_node;
		*h = new_node;

		return (new_node);
	}

	count = 0;
	current = *h;
	while (count != idx - 1)
	{
		current = (current)->next;
		if (current == NULL)
			return (NULL);
		count++;
	}

	temp = (current)->next;
	current->next = new_node;
	new_node->prev = current;
	new_node->next = temp;

	return (new_node);
}
