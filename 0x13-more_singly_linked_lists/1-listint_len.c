#include "lists.h"
#include <stdlib.h>

/**
 * listint_len - returns the number elements of a linked listint_t list
 * @h: list to return the length of
 *
 * Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	unsigned int len;

	len = 0;
	while (h != NULL)
	{
		len++;
		h = h->next;
	}

	return (len);
}
