#include "main.h"

/**
 * helper - helps out
 * @i: int for helper
 * @n: integer to test for
 *
 * Return: a value
 */

int helper(int i, int n)
{
	if (n % i == 0 && n != i)
		return (0);
	if (n % i != 0 && i < n)
		return (helper(i + 1, n));
	return (1);
}

/**
 * is_prime_number - is prime or not
 * @n: integer to compare
 *
 * Return: boolean
 */

int is_prime_number(int n)
{
	int i = 3;

	if (n < 2)
		return (0);
	return (helper(i, n));
}
