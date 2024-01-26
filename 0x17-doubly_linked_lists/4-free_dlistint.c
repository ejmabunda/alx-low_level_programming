#include <stdlib.h>  /* NULL, free */

#include "lists.h"

/**
 * free_dlistint - frees a dlistint list
 * @head: points to the head
 *
 * Return: this function does not return any value
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	temp = head->next;
	while (temp != NULL)
	{
		free(temp);
		temp = temp->next;
	}
	free(head);
	free(temp);
}
