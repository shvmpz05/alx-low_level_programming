#include "main.h"

/**
 * _isupper - checks if character is upper case
 * @c: int to check for
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
