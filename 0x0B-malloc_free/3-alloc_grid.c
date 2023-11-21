#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - return pointer to a pointer to a 2d int array
 * @width: number of columns
 * @height: number of rows
 *
 * Return: 2d in array, NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int a;
	int b;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = (int **)malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		arr[a] = (int *)malloc(sizeof(int) * width);
		if (arr[a] == NULL)
			return (NULL);

		for (b = 0; b < width; b++)
			arr[a][b] = 0;
	}

	return (arr);
}
