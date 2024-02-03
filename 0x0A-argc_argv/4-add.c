#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * _add - adds numbers
 * @argc: number of numbers
 * @argv: array of numbers
 *
 * Return: the sum of numbers
 */
int _add(int argc, char *argv[])
{
	int a;
	int sum;
	char *current_arg;

	sum = 0;
	for (a = 1; a < argc; a++)
	{
		current_arg = argv[a];

		while (*current_arg)
		{
			if (!isdigit(*current_arg))
				return (-1);
			current_arg++;
		}
		sum += atoi(argv[a]);
	}

	return (sum);
}

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int sum;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	sum = _add(argc, argv);
	if (sum < 0)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", sum);

	return (0);
}
