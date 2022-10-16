#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	for (char mychar = 'a'; mychar <= 'z'; mychar++)
		putchar(mychar);

	for (char mychar2 = 'A'; mychar2 <= 'Z'; mychar2++)
		putchar(mychar2);

	printf("\n");
	return (0);
}
