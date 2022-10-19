#include "main.h"
#include <stdio.h>
#include "6-abs.c"
/**
 * print_to_98 - print numbers from n to 98
 *
 * @n: parameters to check
 *
 * Return: Always 0
 */

void print_to_98(int n)
{
	int a;

	if (n > 98)
	{
		for (a = n; a >= 98; a--)
		{
			printf("%d", a);
			if (a != 98)
			{
				printf(", ");
			}
		}
	} else
	{
		for (a = n; a <= 98; a++)
		{
			printf("%d", a);
			if (a != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
