#include "main.h"

/**
 * print_most_numbers - print digits from  0 to 9 except 2 and 4
 *
 * Return: ntothing
 */

void print_most_numbers(void)
{
	int i = '0';

	while (i <= '9')
	{
		if (i != '2' && i != '4')
		{
			_putchar(i);
		}
		i = i + 1;
	}
	_putchar('\n');
}
