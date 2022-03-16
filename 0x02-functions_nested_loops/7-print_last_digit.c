#include "main.h"

/**
 * print_last_digit - print the last digit of the argument
 * @n: integer
 *
 * Return: value of last digit
 */

int print_last_digit(int n)
{
	int i;

	if (n < 0) /* if n is négative turn it positive */
	{
		n = n * (-1);
	}
	i = n % 10;
	_putchar('0' + i);

	return (i);
}
