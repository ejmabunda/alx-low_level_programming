#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

#include "main.h"

/**
 * main - copies the content of a file to another file.
 * @argc: number command-line arguments, including
 * the program's name.
 * @argv: array of command-line arguments, including
 * the program's name.
 *
 * Return: 0 on success,
 * 97 on argument error,
 * 98 on read error,
 * 99 on write error, and
 * 100 on close error
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		return (97); /* argument error */
	}

	result = copy_file(argv[1], argv[2]);
	if (result == 98)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	else if (result == 99)
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);

	return (result);
}

/**
 * copy_file - copies the content of a file to another file.
 * @file_from: source file
 * @file_to: destination file
 *
 * Return: 0 on success,
 * 97 on argument error,
 * 98 on read error,
 * 99 on write error, and
 * 100 on close error
 */
int copy_file(char *file_from, char *file_to)
{
	int fd_from; /* source file descriptor */
	int fd_to; /* destination file descriptor */
	ssize_t bytes_read, bytes_written; /* number of bytes read, written */
	char buffer[BUFFER_SIZE]; /* buffer to store read content */

	if (file_from == NULL || file_to == NULL)
		return (97); /* invalid arguments */

	/* open source file for reading */
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		return (98); /* can't open source file */

	/* open destination file for writing, create if not found */
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd_to == -1)
		return (99); /* can't create or write to destination file */

	/* read from file_from and write to file_to */
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);

		if (bytes_written == -1)
		{
			close(fd_from);
			close(fd_to);
			return (99); /* write error */
		}
	}

	/* clean up */
	close(fd_from);
	close(fd_to);

	if (bytes_read == -1)
		return (98); /* read error */

	return (0); /* success */
}
