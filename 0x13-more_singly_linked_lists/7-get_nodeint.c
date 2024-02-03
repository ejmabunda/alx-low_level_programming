#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index -  returns the nth node of a listint_t linked list.
 * @head: pointer to the head of the list
 * @index: position of the node
 *
 * Return: nth node, NULL if non-existent
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a;

	for (a = 0; a <= index; a++)
	{
		if (head == NULL)
			return (NULL);
		else if (a == index)
			return (head);
		head = head->next;
	}

	return (NULL);
}
