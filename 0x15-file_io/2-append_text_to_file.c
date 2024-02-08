#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h> /* access, F_OK */

#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: The name of the file to append to
 * @text_content: NULL terminated string to add at the end
 * of the file.
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fptr;

	if (filename == NULL)
		return (-1);

	/* check if file exists */
	if (access(filename, F_OK) == -1)
	{
		/* file does not exist */
		return (-1);
	}
	else
	{
		/* file exists */
		if (text_content == NULL)
			return (1);

		fptr = fopen(filename, "a");
		if (fptr == NULL)
			return (-1);

		fputs(text_content, fptr);
	}

	return (1);
}
