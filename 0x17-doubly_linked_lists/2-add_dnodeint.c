#include <stdlib.h>  /* NULL, malloc */

#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * of a dlistint_t list
 * @head: points to the head
 * @n: integer
 *
 * Return: address of the new element, NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	/* allocate memory for the new node */
	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/* initialize node */
	new_node->n = n;
	new_node->prev = NULL;

	/* handle special case for empty list */
	if (*head == NULL)
	{
		new_node->prev = NULL;
		new_node->next = *head;
		*head = new_node;

		return (new_node);
	}

	new_node->next = *head;
	(*head)->prev = new_node;

	*head = new_node;

	return (new_node);
}
