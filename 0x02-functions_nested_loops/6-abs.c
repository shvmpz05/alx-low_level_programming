#include "main.h"

/**
 * _abs - print absolute value of integer
 *
 * @int - parameter to check
 *
 * Return: 1 or 0
 */

int _abs(int n)
{
	if (n > 0)
	{
		return n;
	}
	return (n * -1);
}
