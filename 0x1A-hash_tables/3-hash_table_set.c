#include <stdlib.h>
#include <string.h>

#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table to add/update the key/value to
 * @key: the key
 * @value: the value associated with the key
 *
 * Return: 1 on success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node;  /* will store new node */
	hash_node_t *temp;  /* temporary pointer to traverse list */

	/* create hash node */
	node = (hash_node_t *) malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;

	/* get index for the provided key */
	index = key_index((const unsigned char *)node->key, ht->size);

	/* check for collisions */
	if (ht->array[index] == NULL)  /* no collision */
	{
		ht->array[index] = node;
	}
	else  /* collision */
	{
		temp = ht->array[index];
		while (temp->next != NULL)
			temp = temp->next;

		temp->next = node;
		node->next = NULL;
	}

	return (1);
}
