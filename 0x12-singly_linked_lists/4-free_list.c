#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list
 * @head: pointer to the first element of the list
 *
 * Return: this function does not return any value
 */
void free_list(list_t *head)
{
	list_t *current;
	list_t *next_node;

	current = head;

	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
}
