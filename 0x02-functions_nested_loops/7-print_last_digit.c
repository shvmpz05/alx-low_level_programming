#include "main.h"
#include "6-abs.c"

/**
 * print_last_digit - Prints the last value of an integer
 *
 * @n: value to be checked
 *
 * Return: 0 or 1 
 */

int print_last_digit(int n)
{
	_putchar('0' + _abs(n % 10));
	return (_abs( n % 10));
}
