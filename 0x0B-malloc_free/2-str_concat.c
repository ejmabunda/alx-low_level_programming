#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to a new string containing the first and second string
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int length_s1 = 0;
	int length_s2 = 0;
	int a = 0;
	int i;

	/* If NULL is passed, treat it as an empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate string lengths */
	while (s1[length_s1] != '\0')
		length_s1++;
	while (s2[length_s2] != '\0')
		length_s2++;

	/* Allocate memory for the concatenated string */
	str = (char *)malloc(sizeof(char) * (length_s1 + length_s2 + 1));

	/* Check if malloc worked */
	if (str == NULL)
		return (NULL);

	for (i = 0; i < length_s1; i++)
		str[a++] = s1[i];

	for (i = 0; i < length_s2; i++)
		str[a++] = s2[i];

	str[a] = '\0';

	return (str);
}
