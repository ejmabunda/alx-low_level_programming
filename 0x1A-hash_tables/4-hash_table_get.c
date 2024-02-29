#include <stdlib.h>
#include <string.h>

#include "hash_tables.h"

/**
 * hash_table_get - retrieves the value associated with a key
 * @ht: the hash table to look into
 * @key: the key to look for
 *
 * Return: the value associated with the element, NULL if
 * not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;  /* index based on key */
	hash_node_t *temp;  /* temporary pointer to traverse chains */

	/* get index from key */
	index = key_index((const unsigned char *)key, ht->size);

	/* search for the value */
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}

	/* Not found */
	return (NULL);
}
