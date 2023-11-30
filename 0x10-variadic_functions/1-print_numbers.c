#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: the string to be printd between numbers
 * @n: number of integers passed
 *
 * Return: this function does not return any value
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int a;

	va_start(ap, n);

	for (a = 0; a < n; a++)
	{
		if (separator == NULL || a + 1 == n)
			printf("%d", va_arg(ap, int));
		else
			printf("%d%s", va_arg(ap, int), separator);
	}
	putchar('\n');

	va_end(ap);
}
