#include <stdlib.h> /* NULL */
#include <stdio.h> /* fopen */

#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output
 * @filename: name of file
 * @letters: number of letters to read or print
 *
 * Return: number of letters read, 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t read;
	FILE *fptr;
	int c;

	if (filename == NULL)
		return (0);

	read = 0;
	fptr = fopen(filename, "r");

	while (read != letters)
	{
		c = fgetc(fptr);
		if (c == EOF)
		{
			_putchar('\n');
			read++;
			break;
		}

		_putchar(c);
		read++;
	}

	fclose(fptr);
	return (read);
}
