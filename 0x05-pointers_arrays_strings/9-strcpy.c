#include "main.h"

/**
 * char*_strcpy - main function
 * @dest: copy to
 * @src: copy from
 *
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0 ; src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
