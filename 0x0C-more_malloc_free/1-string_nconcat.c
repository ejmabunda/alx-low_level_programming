#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: the first bytes of s2
 *
 * Return: a pointer to the concatenated string, NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int s1_length = 0;
	unsigned int s2_length = 0;
	unsigned int str_length;
	unsigned int a;
	unsigned int b;

	/* Treat as empty string when NULL is passed */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Get string lengths */
	while (s1[s1_length] != '\0')
		s1_length++;

	while (s2[s2_length] != '\0')
		s2_length++;

	/* Try to allocate space */
	if (n >= s2_length)
		str_length = s1_length + s2_length;
	else
		str_length = s1_length + n;
	str = (char *)malloc((str_length) * sizeof(char));
	if (str == NULL)
		return (NULL);
	for (a = 0; a < s1_length; a++)
		str[a] = s1[a];
	for (b = 0; b < n; b++)
	{
		str[a] = s2[b];
		a++;
	}

	return (str);
}
