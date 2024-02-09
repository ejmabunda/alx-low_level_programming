#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

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
	ssize_t bytes_read, bytes_written; /* number of bytes read, written */
	char *buffer; /* buffer to store file content */
	int fd; /* file descriptor */

	if (filename == NULL)
		return (0); /* invalid filename */

	fd = open(filename, O_RDONLY); /* open file for reading */
	if (fd == -1)
		return (0); /* can't open file */

	buffer = (char *)malloc(letters); /* allocate memory for buffer */
	if (buffer == NULL)
	{
		close(fd);
		return (0); /* malloc failed */
	}

	bytes_read = read(fd, buffer, letters); /* read from the file */
	if (bytes_read == -1)
	{
		free(buffer);
		close(fd);
		return (0); /* can't read from file */
	}

	/* print to stdout */
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	free(buffer);
	close(fd); /* clean up */

	if (bytes_written != bytes_read)
		return (0); /* write error */

	return (bytes_written);
}
