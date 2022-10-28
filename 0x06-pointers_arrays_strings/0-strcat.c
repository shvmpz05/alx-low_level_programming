#include "main.h"

/**
 * _strcat - concatinate strings
 *
 * @dest: string to be joined
 * @src: string to join to the destination
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (j = 0; dest[j] != '\0'; j++)
	{}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[j + i] = src[i];
	}

	dest[j + i] = '\0';

	return (dest);
}
