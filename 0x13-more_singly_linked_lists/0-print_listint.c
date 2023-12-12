#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: list to print from
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int len;

	len = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}

	return (len);
}
