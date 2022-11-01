#include "main.h"

/**
 *  _memcpy - copies from source to dest values in array
 *  @dest: destination to copy to
 *  @src: source to copy from
 *  @n: n amount of times
 *  Return: return the string value
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
