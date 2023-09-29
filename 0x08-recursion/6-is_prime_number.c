#include "main.h"

/**
 * is_prime_number - an int
 * @n: number to evaluate
 *
 * Return: the right value
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calulates if it's prime
 * @n: evalute
 * @i: iterator
 *
 * Return: prime no
 */

int actual_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (actual_prime(n, i - 1));
}
