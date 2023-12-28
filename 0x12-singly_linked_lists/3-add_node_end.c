#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end -  adds a new node at the end of a list_t list.
 * @head: pointer to the first element of the list
 * @str: string to initialize new node with
 *
 * Return: the address of the new node, NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *current;
	char *str_dup;
	int len;

	new_node = (list_t *)malloc(sizeof(list_t));
	str_dup = strdup(str);
	if (new_node == NULL || str_dup == NULL)
		return (NULL);

	/* get string length */
	len = 0;
	while (str_dup[len] != '\0')
		len++;

	new_node->str = str_dup;
	new_node->len = len;
	new_node->next = NULL;

	/* insert new node at the end of the list */
	current = *head;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (current->next != NULL)
			current = current->next;

		current->next = new_node;
	}

	return (new_node);
}
