#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - add a new node at the beginning of a
 * list_t list
 * @head: pointer to the first element of the list
 * @str: string to initialize new new with
 *
 * Return: the address of the new element, NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
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
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
