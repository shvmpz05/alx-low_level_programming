#include "main.h"

/**
 * strlen_recursion - print length of string
 *
 * @s: argument to test
 *
 * Return: integer
 */

int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s)
	{
		n = _strlen_recursion(s + 1);
		return (n += 1);
	}
	return (0);
}
