#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if it's palindrome
 * @s: reverses
 *
 * Return: 1, 0
 */

int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - length odf a string
 * @s: calulate the length
 *
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks char
 * @s: string to be checked
 * @i: iterator
 * @len: len of the string
 *
 * Return: 1, 0
 */

int check_pal(char *s, int i, int len)
{
	if ((*s + 1) != (*s + len - 1))
	{
		return (0);
	}
	if (i >= len)
	{
		return (1);
	}
	return (check_pal(s, i + 1, len - 1));
}
