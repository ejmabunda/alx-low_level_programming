#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to return square root of
 *
 * Return: square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	else if (n == 0)
		return (0);
	else if (n < 0)
		return (-1);
	return (_sqrt_r_helper(n, n / 2));
}

/**
 * _sqrt_r_helper - try to guess the square root
 * @n: number to guess square root of
 * @guess: number used to guess the square root
 *
 * Return: squre root, -1 if not found
 */
int _sqrt_r_helper(int n, int guess)
{
	if (guess == 1)
		return (-1);
	else if (guess * guess == n)
		return (guess);
	else
		return (_sqrt_r_helper(n, guess - 1));
}
