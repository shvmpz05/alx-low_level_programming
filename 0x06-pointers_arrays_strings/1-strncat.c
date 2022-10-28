#include "main.h"

/**
 * _strncat - concatinating string but will use n bytes
 *
 * @n: int to represent bytes
 * @dest: string to be added content
 * @src: content itself
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{}

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j + i] = src[j];
	}
	dest[i + j] = '\0';

	return (dest);
}
