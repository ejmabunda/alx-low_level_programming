#include <stdlib.h>  /* NULL, malloc */
#include <stdio.h>  /* printf */

#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of
 * a dlistint_t list
 * @head: points to the head
 * @n: integer
 *
 * Return: address of the new node, NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t **temp;

	/* allocate memory for the new node */
	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/* initialize the new node */
	new_node->n = n;
	new_node->next = NULL;
	
	/* handle empty list */
	if (*head == NULL)
	{
		*head = new_node;
		(*head)->prev = NULL;
		(*head)->next = NULL;

		return (*head);
	}
	temp = head;
	
	/* go to end of list and append new node */
	while ((*temp)->next != NULL)
		*temp = (*temp)->next;

	(*temp)->next = new_node;
	new_node->prev = (*temp);

	/* go to start of list */
	while ((*temp)->prev != NULL)
		*temp = (*temp)->prev;

	return (new_node);
}
