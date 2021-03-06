#include "main.h"

/**
 * print_sign - print the sign of integer
 * @n: integer
 *
 * Return: 1 if n > 0; -1 if n < 0 or 0 i n = 0
 */

int print_sign(int n)
{
	int i;

	if (n > 0)
	{
		_putchar('+');
		i = 1;
	}
	else if (n < 0)
	{
		_putchar('-');
		i = -1;
	}
	else if (n == 0)
	{
		_putchar('0');
		i = 0;
	}
	return (i);
}
