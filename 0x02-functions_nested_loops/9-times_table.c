#include "main.h"

/**
 * times_table - prints out mulitplication table
 *
 * @void: no parameter
 *
 * Return: Always 0 (success)
 */

void times_table(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			int product = a * b;

			if (b == 0)
			{
				_putchar('0');
			} else if (product <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(product + '0');
			} else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
			}
		}
		_putchar('\n');
	}
}

