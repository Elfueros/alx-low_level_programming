#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print integer from argument no 98
 * @n: integer
 * Return: nothing
 */

void print_to_98(int n)
{
	int i = n;

	if (n > 98)
	{
		while (i >= 98)
		{
			printf("%i", i);
			_putchar(',');
			_putchar(' ');
			i = i - 1;
		}
	}
	else if (n == 98)
	{
		printf("98");
	}
	else if (n < 98)
	{
		while (i <= 98)
		{
			printf("%d", i);
			_putchar(',');
			_putchar(' ');
			i = i + 1;
		}
	}
	_putchar('\n');
}
