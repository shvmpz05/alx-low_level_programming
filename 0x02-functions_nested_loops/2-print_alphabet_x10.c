#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet in single line
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char a;
	char b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}
