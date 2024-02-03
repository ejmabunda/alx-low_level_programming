#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to search
 * @size: number of elements
 * @cmp: pointer to function that compares values
 *
 * Return: index of first match, -1 if not found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;
	int result;
	
	if (size <= 0)
		return (-1);
	
	for (a = 0; a < size; a++)
	{
		result = (*cmp)(array[a]);
		
		if (result != 0)
			return (a);
	}
	
	/* not found */
	return (-1);
}
