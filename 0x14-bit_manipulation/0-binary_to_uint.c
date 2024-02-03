#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * power - calculates the value of number raised to the
 * power of another number
 * @base: base
 * @exponent: exponent
 *
 * Return: the value of base, exponent times
 */
int power(int base, int exponent)
{
	int ans;
	int a;

	ans = 1;
	if (exponent == 0)
		return (ans);
	else if (exponent == 1)
		return (base);

	for (a = 0; a < exponent; a++)
		ans = ans * base;

	return (ans);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: points to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if there's a char in the
 * string that is not 0 or 1, or if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res;
	unsigned int strlen;
	unsigned int a;
	/* Return 0 when b is NULL */
	if (b == NULL)
		return (0);

	/**
	 * Return 0 when there's a non-zero, non-one character in
	 * the string. And get length of string
	 */
	strlen = 0;
	for (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
		strlen++;
	}

	res = 0;
	a = 0;
	for (a = 0; a < strlen; a++)
	{
		res = (res * 2) + (b[a] - '0');
	}

	return (res);
}
