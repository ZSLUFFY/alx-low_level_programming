#include "main.h"

/**
 * _memcpy - function copies n byets
 * @dest: dest
 * @src: source
 * @n: the copied file
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r;
	int i = n;

	for (r = 0 ; r < i ; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
