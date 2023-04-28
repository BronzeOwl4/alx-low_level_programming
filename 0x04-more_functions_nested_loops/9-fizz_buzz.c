#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints an integer
 *
 * Return: Always 0
 */
void more_numbers(void)
{
	int i = 1;

	if (i <= 100)
	{
		_putchar(' ');
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		else if (i % 3 == 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
		}
		else if (i % 5 == 0)
		{
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		else
		{
			_putchar('\n');
		}
			more_numbers(i);
		i++;
	}
	}
}
