#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: pointer to the allocated memory, NULL on failure or when nmemb
 * or size is 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	/* Allocate array memory, and check for failures */
	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);

	/* Initialize memory to zero */
	for (a = 0; a < nmemb; a++)
		*((char *)arr + (a * size)) = 0;

	return (arr);
}
