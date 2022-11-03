#include "main.h"

/**
 * _puts_recursion - puts out a string followed by a new line
 *
 * @s: argument to test 
 *
 * Return: 0 Always success
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	else
		_putchar('\n');
}
