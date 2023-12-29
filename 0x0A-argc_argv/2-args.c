#include "main.h"
#include <stdio.h>

/**
 * print_args - prints all arguments
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: this function does return any value
 */
void print_args(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
		printf("%s\n", argv[a]);
}

/**
 * main - entry point
 * @argc: number of argument
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	print_args(argc, argv);

	return (0);
}
