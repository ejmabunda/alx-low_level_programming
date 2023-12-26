#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: number to convert to binary then print
 *
 * Return: this function does not return any value
 */
void print_binary(unsigned long int n)
{
	int bin[64];
	unsigned long int i;

	if (n == 0)
	{
		printf("0");
		return;
	}

	i = 0;
	while (n > 0)
	{
		bin[i] = n & 1;
		n = n >> 1;
		i++;
	}

	while (1)
	{
		i--;
		printf("%d", bin[i]);
		if (i == 0)
			break;
	}
}
