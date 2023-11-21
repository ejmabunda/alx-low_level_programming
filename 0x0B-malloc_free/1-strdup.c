#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a copy of a string
 * @str: string to be copied
 *
 * Return: pointer to string copy, NULL if failed
 */
char *_strdup(char *str)
{
	char *strcpy;
	int length = 0;
	int i;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
	{
		length++;
	}

	strcpy = (char *)malloc(sizeof(char) * (length + 1));

	if (strcpy == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		strcpy[i] = str[i];

	strcpy[length] = '\0';

	return (strcpy);
}
