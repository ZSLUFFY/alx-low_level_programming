#include "main.h"

/**
 * swap_int - swaps
 * @a: swapper
 * @b: swapper
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
