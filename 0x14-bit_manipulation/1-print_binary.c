#include "main.h"

/**
 * pow - fun calc
 * @base: exponent
 * @power: exponent
 *
 * Return: value
 */

unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int num = 1;
	unsigned int a;

	for (a = 1; a <= power; a++)
	{
		num *= base;
	}
	return (num);
}

/**
 * print_binary - prints a no
 * @n: nomber to print
 */

void print_binary(unsigned long int n)
{
	unsigned long int divisor, check;
	char flag = 0;

	divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (divisor != 0)
	{
		check = n & divisor;
		if (check == divisor)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || divisor == 1)
			_putchar('0');
		divisor >>= 1;
	}
}
