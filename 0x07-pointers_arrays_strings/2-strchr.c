#include "main.h"

/**
 * _strchr - Etnry point
 * @s: input
 * @c: input to check
 *
 * Return: Always 0 Success
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		for (; s[i] >= '\0'; i++)
		{
			if (s[i] == c)
				return (&s[i]);
		}
	}
	return (0);
}
