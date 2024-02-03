#include "main.h"

/**
 * is_prime_helper - entry point
 * @n: integer to check
 * @a: used to check factors
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_helper(int n, int a)
{
	/* base case */
	if (n <= 1)
		return (0);
	else if (n == 2)
		return (1);
	else if (n % 2 == 0)
		return (0);
	else if (n % a == 0 && n != a)
		return (0);
	else if (n == a)
		return (1);

	/* recursive case */
	return (is_prime_helper(n, a + 1));
}

/**
 * is_prime_number - checks if an integer is prime
 * @n: integer to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}
