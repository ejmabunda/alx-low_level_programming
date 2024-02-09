#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
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
	int fd; /* file descriptor */
	ssize_t bytes_written; /* number of bytes written */

	if (filename == NULL)
		return (-1); /* invalid filename */

	/* open file for writing (create if not found) */
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1); /* can't open or create file */

	if (text_content != NULL)
	{
		/* write text content to the file */
		bytes_written = write(fd, text_content, _strlen(text_content));
		if (bytes_written == -1)
		{
			close(fd);
			return (-1); /* write error */
		}
	}

	close(fd);
	return (1); /* success */
}

/**
 * _strlen - counts the number of characters in a string
 * @str: string to get length of
 *
 * Return: length of string
 */
int _strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;

	return (len);
}
