#include <stdlib.h>
#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - Search for a value using binary search.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in @array.
 * @value: The value to search for.
 *
 * Return: The index where @value is located, -1 if not present or
 * @array is NULL.
*/
int binary_search(int *array, size_t size, int value)
{
	return (binary_search_helper(array, 0, size - 1, value, size));
}

/**
 * binary_search_helper - Helper function to perform binary search.
 * @array: A pointer to the first element of the array to search in.
 * @left: The leftmost index of the subarray to search in.
 * @right: The rightmost index of the subarray to search in.
 * @value: The value to search for.
 * @size: The number of elements in @array.
 *
 * Return: The index where 'value' is located, -1 if 'value'
 * is not present, 'array' is NULL, or 'right' is less than 'left'.
 */

int binary_search_helper(int *array, size_t left,
size_t right, int value, size_t size)
{
	size_t mid;

	if (array == NULL || right < left)
		return (-1);

	mid = left + (right - left) / 2;

	/* Print the current search range */
	print_array(array, left, right);

	if (array[mid] == value)
		return (mid);
	else if (array[mid] > value)
		return (binary_search_helper(array, left, mid - 1, value, size));
	else
		return (binary_search_helper(array, mid + 1, right, value, size));
}

/**
 * print_array - Print the array based on its left and right elements.
 * @array: Pointer to the first element of the array.
 * @left: First element of the array to print.
 * @right: Last element of the array to print.
 *
 * Return: This function does return any value.
*/
void print_array(int *array, size_t left, size_t right)
{
	size_t index;

	printf("Searching in array: ");
	for (index = left; index <= right; index++)
	{
		if (index == right)
			printf("%d\n", array[index]);
		else
			printf("%d, ", array[index]);
	}
}
