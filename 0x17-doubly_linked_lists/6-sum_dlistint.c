#include <stdlib.h>  /* NULL */

#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of
 * a dlistint-t linked list.
 * @head: points to the head
 *
 * Return: sum of all elements, 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
