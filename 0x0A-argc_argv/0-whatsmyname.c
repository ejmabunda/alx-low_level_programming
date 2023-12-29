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
	puts(argv[0]);
}

int main(int argc, char *argv[])
{
	whatsmyname(argc, argv);
	return (0);
}
