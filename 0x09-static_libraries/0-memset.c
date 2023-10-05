#include "main.h"

/**
 * _memset - function fills the first byte
 * @s: starts memory
 * @b: desired value
 * @n: bytes to be changed
 *
 * Return: s value
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
