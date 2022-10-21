#include "main.h"

/**
 * _isdigit - Checks for numbers 0 to 9
 * @c: parameter to pass
 * Return: 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
