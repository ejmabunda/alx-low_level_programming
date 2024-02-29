#include <stdlib.h>

#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table
 *
 * Return: this function does not return any value
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int ix;
	hash_node_t *current, *temp;

	for (ix = 0; ix < ht->size; ix++)
	{
		current = ht->array[ix];
		while (current != NULL)
		{
			temp = current;
			current = current->next;

			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}

	free(ht->array);
	free(ht);
}
