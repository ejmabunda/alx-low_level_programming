#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_stings - prints strings, followed by a new line
 * @separator: the string to be printed between strings
 * @n: number of strings passed
 *
 * Return: this function does not return any value
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int a;
	char *str;

	va_start(ap, n);

	for (a = 0; a < n; a++)
	{
		str = va_arg(ap, char *);
		if (separator == NULL || a + 1 == n)
		{
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
		}
		else
		{
			if (str == NULL)
				printf("(nil)%s", separator);
			else
				printf("%s%s", str, separator);
		}
	}
	putchar('\n');

	va_end(ap);
}
