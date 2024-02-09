#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

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
	ssize_t bytes_written; /* number of bytes written */
	int fd; /* file descriptor */

	if (filename == NULL)
		return (-1); /* invalid filename */

	/* open file for writing (append mode) */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1); /* can't open file */

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
	return (1);
}

/**
 * _strlen - counts the number of characters in a string
 * @str: string to check length of
 *
 * Return: the length of the string
 */
int _strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;

	return (len);
}
