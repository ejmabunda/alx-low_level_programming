#include <stdlib.h> /* NULL */
#include <stdio.h> /* FILE, fopen, fputs, fclose */
#include <sys/stat.h>
#include <unistd.h>

#include "main.h"

/**
 * create_file - creates a file
 * @filename: The name of the file to create
 * @text_content: NULL terminated string to write
 * to the file.
 *
 * Return: 1 on sucess, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	FILE *fptr;
	int n;

	if (filename == NULL)
		return (-1);

	if (access(filename, F_OK) != -1)
	{
		/* open file in write mode and check for errors */
		fptr = fopen(filename, "w");
		if (fptr == NULL)
			return (-1);
	}
	else
	{
		/* open file in write mode and check for errors */
		fptr = fopen(filename, "w");
		if (fptr == NULL)
			return (-1);

		/* change permissions */
		chmod(filename, S_IRUSR | S_IWUSR);
	}

	/* write to file */
	n = fputs(text_content, fptr);
	if (n < 0)
		return (-1);

	fclose(fptr);
	return (1);
}
