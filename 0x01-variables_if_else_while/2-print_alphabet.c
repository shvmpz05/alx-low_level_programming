#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char mychar = 'a';

	for (mychar = 'a'; mychar <= 'z'; mychar++)
	{
		putchar(mychar);
	}
	printf("\n");
	return (0);
}
