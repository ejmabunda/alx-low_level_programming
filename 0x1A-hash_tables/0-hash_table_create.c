#include <stdlib.h>

#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int ix;  /* index for loops */

	/* allocate memory for hash table */
	table = (hash_table_t *) malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = (hash_node_t **) calloc(table->size, sizeof(hash_node_t *));
	if (table->array == NULL)
		return (NULL);

	/* initialize table items with NULL */
	for (ix = 0; ix < table->size; ix++)
		table->array[ix] = NULL;

	return (table);
}
