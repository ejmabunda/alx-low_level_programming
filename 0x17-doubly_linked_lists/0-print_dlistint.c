#include <stdlib.h>  /* NULL, free */
#include <stdio.h>  /* printf */

#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: points to the head
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}

	return (nodes);
}
