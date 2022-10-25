#include "main.h"

/**
 * swap_int - swaps values of integers
 *
 * @a: pointer to be checked
 * @b: pointer to be taken
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int d = *a;
	int c = *b;

	*a = c;
	*b = d;
}
