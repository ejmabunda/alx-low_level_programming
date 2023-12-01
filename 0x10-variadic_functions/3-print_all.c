#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types
 *
 * Return: this function does not return any value
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int argi;
	float argf;
	char *args;
	const char *ptr;

	ptr = format;
	va_start(ap, format);

	while (*ptr != '\0')
	{
		if (*ptr == 'c')
		{
			argi = va_arg(ap, int);
			printf("%c", argi);
		}
		else if (*ptr == 'i')
		{
			argi = va_arg(ap, int);
			printf("%d", argi);
		}
		else if (*ptr == 'f')
                {
                        argf = va_arg(ap, double);
			printf("%f", argf);
                }
		else if (*ptr == 's')
                {
                        args = va_arg(ap, char *);
                        if (args == NULL)
                                printf("(nil)");
                        else
                                printf("%s", args);
                }
		else if (*ptr != 'c' && *ptr != 'i' && *ptr != 'f' && *ptr != 's')
		{
			ptr++;
			continue;
		}

		ptr++;
		if (*ptr != '\0')
			printf(", ");
	}
	
	va_end(ap);
	putchar('\n');
}
