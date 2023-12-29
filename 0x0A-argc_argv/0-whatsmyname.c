#include "main.h"
#include <stdio.h>

/**
 * whatsmyname - prints the program's name, followed by a newline
 * @argc: number of command-line arguments, including the program's name
 * @argv: array containing command-line argument passed,
 * including the program´s name
 *
 * Return: this function does not return any value
 */
void whatsmyname(int argc, char *argv[])
{
	int len; /* ignore this and next two lines */

	len = argc;
	len++;
	printf("%s\n", argv[0]);
}

/**
 * main - entry point
 * @argc: number of command-line arguments, including program's name
 * @argv: array of command-line arguments, including program's name
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	whatsmyname(argc, argv);
	return (0);
}
