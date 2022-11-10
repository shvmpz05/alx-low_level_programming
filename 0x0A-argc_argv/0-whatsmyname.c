#include <stdio.h>
#include <stdlib.h>

#define UNUSED(x) (void)(x)

/**
 * main - prints out name of command
 * @argc: counts number of arguments
 * @argv: stores the arguments
 *
 * Return: 0 Always Success
 */

int main(int argc, char *argv[])
{
	UNUSED(argc);
	printf("%s\n", argv[0]);

	return (0);
}
