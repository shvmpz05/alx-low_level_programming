#include "main.h"

/**
 * helper - find natural square root of a number
 *
 * @n: parameter to check
 * @i: parameter to check
 *
 * Return: integer
 */

int helper(int i, int n)
{
	int j;

	if (i * i != n)
	{
		if (i > n)
		{
			return (-1);
		}
		j = helper(i + 1, n);
		return (j + 1);
	}
	return (0);
}

/**
 * _sqrt_recursion - find the square root
 *
 * @n: parameter to check
 *
 * Return: integer
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	if (helper(i, n) == n && n != 1)
		return (-1);
	return (helper(i, n));
}
