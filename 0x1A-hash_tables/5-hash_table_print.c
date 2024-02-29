#include <stdlib.h>
#include <stdio.h>

#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 *
 * Return: this function does not return any value
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int ix;
	hash_node_t *temp;  /* temporary node to traverse chain */
	int first;  /* determines if node is first in chain, for printing */

	/* handle empty hash table */
	if (ht == NULL)
		return;

	/* loop through array, one by one */
	first = 0;
	printf("{");  /* wrap table in '{}' */
	for (ix = 0; ix < ht->size; ix++)
	{
		temp = ht->array[ix];
		while (temp != NULL) /* print entire chain */
		{
			if (first == 0)  /* first non-NULL node in array */
			{
				printf("'%s': '%s'", temp->key, temp->value);
				first = 1;
			}
			else
			{
				printf(", '%s': '%s'", temp->key, temp->value);
			}
			temp = temp->next;
		}
	}
	printf("}\n");  /* wrap table in '{}' */
}
