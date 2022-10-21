#include "main.h"

/**
 * print_line - prints line on the terminal
 * @n: parameter to check
 * Return: 0
 */

void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
