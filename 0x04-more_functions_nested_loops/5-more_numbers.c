#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints 10 times the numbers
 *
 * Return: Always 0
 */
void more_numbers(void)
{
	int i = 0;
	int j = 0;

	while (j < 10)
	{
		i = 0;
		while (i <= 14)
	{
		if (i > 9)
			_putchar(i / 10 + '0');
		_putchar(i % 10 + '0');
		i++;
	}
	_putchar('\n');
	j++;
	}
}
