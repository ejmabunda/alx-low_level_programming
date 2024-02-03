#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _mult - multiplies two integers
 * @a: integer
 * @b: integer
 *
 * Return: product of two integers
 */
int _mult(int a, int b)
{
	return (a * b);
}

/**
 * main - prints the product of two integers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		puts("Error\n");
		return (1);
	}

	printf("%d\n", _mult(atoi(argv[1]), atoi(argv[2])));

	return (0);
}
