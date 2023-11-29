#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes a function given as a parameter on each element
 * of an array
 * @array: array to iterate through
 * @size: size of the array
 * @action: pointer to the function to execute
 *
 * Return: this function does not return any value
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int a;

	for (a = 0; a < size; a++)
		(*action)(array[a]);
}
