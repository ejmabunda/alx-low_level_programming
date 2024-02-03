#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: start value
 * @max: end value
 *
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *arr;
	int a;
	int size;

	if (min > max)
		return (NULL);

	/* Allocate space and check for failure */
	size = max - min + 1;
	arr = (int *)malloc(size * sizeof(int));
	if (arr == NULL)
		return (NULL);

	/* Initialize array with min to max */
	for (a = 0; a < size; a++)
		arr[a] = min + a;

	return (arr);
}
