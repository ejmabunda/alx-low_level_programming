#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>

#include "main.h"

/**
 * main - copies the content of a file to another file.
 * @argc: number command-line arguments, including
 * the program's name.
 * @argv: array of command-line arguments, including
 * the program's name.
 *
 * Return: Always 1 (success).
 */
int main(int argc, char *argv[])
{
	FILE *from_ptr;
	FILE *to_ptr;
	char *file_from;
	char *file_to;
	char from_data[1024];
	int to_exists;

	/* number of arguments must be 2 */
	if (argc -1 != 2)
	{
		perror("Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];

	/* look for file_from */
	if (access(file_from, F_OK) == -1)
	{
		/* file does not exit */
		perror("Error: Can't read from file\n");
		exit(98);
	}
	else
	{
		from_ptr = fopen(file_from, "r");
		
		/* Can't open file_from */
		if (from_ptr == NULL)
		{
			perror("Error: Can't read from\n");
			exit(99);
		}
	}

	/* look for file_to */
	if (access(file_to, F_OK) != -1)
		to_exists = 1;
	else
		to_exists = 0;
	
	/* try to open */
	to_ptr = fopen(file_to, "a");

/* Can't open file_to */
	if (to_ptr == NULL)
	{
		perror("Error: Can't write to\n");
		exit(99);
	}

	if (!to_exists)
		chmod(file_to, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
		
	/* copy data from original file to the copy */
	while (fgets(from_data, 1024, from_ptr) != NULL)
	{
		fputs(from_data, to_ptr);
	}
	fputs("\n", to_ptr);

	/* try to close the files */
	if (fclose(from_ptr) != 0)
	{
		perror("Error: Can't close fd\n");
		exit(100);
	}
	if (fclose(to_ptr) != 0)
	{
		perror("Error: Can't close fd\n");
		exit(100);
	}

	/* Success */
	return (1);
}
