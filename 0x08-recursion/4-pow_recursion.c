#include "main.h"

/**
 * _pow_recursion - gets x to the power y
 *
 * @x: number to raised
 * @y: number to use to raise
 *
 * Return: integer as result of the calculation
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	return (1);
}
