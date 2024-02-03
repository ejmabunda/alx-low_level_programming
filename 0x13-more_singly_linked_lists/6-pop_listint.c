#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n).
 * @head: pointer to the head of a list
 *
 * Return: head node's data, 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *current;

	if (*head == NULL)
		return (0);

	data = (*head)->n;

	current = (*head)->next;
	free(*head);

	*head = current;

	return (data);
}
