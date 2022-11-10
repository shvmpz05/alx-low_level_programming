#include <stdio.h>
#include <stdlib.h>

#define UNUSED(x) (void)(x)

/**
 * main - print out all arguments passed on to the program
 * @argc: counts the number of arguments
 * @argv: stores the arguments
 *
 * Return
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
