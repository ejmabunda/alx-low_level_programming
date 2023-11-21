#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an initialized array of chars
 * @size: size of array
 * @c: character to initialize array with
 *
 * Return: pointer to the array, NULL if failed
 */
char *create_array(unsigned int size, char c)
{
	size_t i;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = (char *)malloc(sizeof(char) * size);

	if (arr == NULL)
		return NULL;	
	
	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
