#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: this function does not return any value
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t total;
	void *ptr;
	size_t i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total = nmemb * size;
	ptr = malloc(total);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < total; i++)
		*((char *)ptr + i) = 0;

	return (ptr);
}
