#include "main.h"

/**
 * factorial - get fuctorial of number
 *
 * @n: parameter to check
 *
 * Return: an integer
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n > 0)
		return (n * factorial(n - 1));
	return (1);
}
