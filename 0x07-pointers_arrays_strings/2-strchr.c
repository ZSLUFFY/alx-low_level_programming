#include "main.h"

/**
 * _strchr - a pointer
 * @s: string s
 * @c: char c
 *
 * Return: correct value
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
