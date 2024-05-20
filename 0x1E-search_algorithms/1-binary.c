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
	return (binary_search_helper(array, 0, size - 1, value));
}

/**
 * binary_search_helper - Helper function to perform binary search.
 * @array: A pointer to the first element of the array to search in.
 * @left: The leftmost index of the subarray to search in.
 * @right: The rightmost index of the subarray to search in.
 * @value: The value to search for.
 *
 * Return: The index where 'value' is located, -1 if 'value'
 * is not present, 'array' is NULL, or 'right' is less than 'left'.
 */
int binary_search_helper(int *array, size_t left, size_t right, int value);

int binary_search_helper(int *array, size_t left, size_t right, int value)
{
	size_t mid;

	if (array == NULL || right < left)
		return (-1);

	if (right >= left)
		mid = left + (right - left) / 2;

    /* If the element is present at the middle itself */
	if (array[mid] == value)
		return (mid);

    /* If element is smaller, search in left half */
	if (array[mid] > value)
		return (binary_search_helper(array, left, mid - 1, value));

    /* If element is greater, search in right half */
	return (binary_search_helper(array, mid + 1, right, value));
}
