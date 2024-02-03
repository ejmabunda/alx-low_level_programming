#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - entry point
 * @argc: number of command-line arguments
 * @argv: array containing arguments passed from the command-line
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (get_op_func(argv[2]) == NULL)
	{
		printf("%s", argv[2]);
		printf("Error\n");
		exit(99);
	}
	
	if (strcmp(argv[2], "/") == 0 && b == 0)
	{
		if (strcmp(argv[2], "%") == 0 && b == 0)
		{
			printf("Error\n");
			exit(100);
		}
	}

	result = get_op_func(argv[2])(a, b);
	printf("%d\n", result);

	return (0);
}
