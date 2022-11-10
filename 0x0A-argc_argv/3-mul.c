#include <stdio.h>
#include <stdlib.h>

#define UNUSED(x) (void)(x)

/**
 * main - multiplies two numbers
 * @argc: counts the number of arguments passed
 * @argv: store the number of arguments
 *
 * Return: 0 Success Always
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
		printf("Error\n");
	return (1);
}
