#include <stdlib.h>  /* NULL */

#include "lists.h"

/**
 * dlistint_len - returns the number of elements of
 * a doubly linked list
 * @h: points to the head
 *
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes;

	nodes = 0;
	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
