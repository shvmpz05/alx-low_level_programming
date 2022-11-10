#include <stdio.h>
#include <stdlib.h>

#define UNUSED(x) (void)(x)

/**
 * main - prints number of arguments passed into it
 * @argc: counts the number of arguments
 * @argv: stores the number of arguments
 *
 * Return: 0 Success Always
 */

int main(int argc, char *argv[])
{
	UNUSED(argv);
	printf("%d\n", argc - 1);

	return (0);

}
