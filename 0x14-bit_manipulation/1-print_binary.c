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
	if (n > 1)
	    print_binary(n >> 1);

	putchar((n & 1) + '0');
}
