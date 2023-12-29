#include "main.h"
#include <stdio.h>

/**
 * args - prints the number of arguments passed
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: this function does not return any value
 */
void args(int argc, char *argv[])
{
	argv = argv;
	
	printf("%d\n", argc - 1);
}

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	args(argc, argv);
	return (0);
}
