#include <ctype.h>
#include "main.h"
/**
 * print_times_table - prints the n times table
 * @n: the number of times table is printed
 *
 * Return: starting with 0
 */
void print_times_table(int n)
{
	int rows, columns, multi;
	if (n >= 0 && n <= 15)
	{
	for (rows = 0; rows <= n; rows++)
	{
		_putchar('0');
		for (columns = 1; columns <= n; columns++)
		{
			_putchar(',');
			_putchar(' ');
			multi = rows * columns;
			if (multi <= 99)
				_putchar(' ');
			if (multi <= 9)
				_putchar(' ');
			if (multi >= 100)
			{
				_putchar((multi / 100) + '0');
				_putchar((multi / 10) % 10 + '0');
			}
			else if (multi <= 99 && multi >= 10)
			{
				_putchar((multi / 10) + '0');
			}
				_putchar((multi % 10) + '0');
			}
		_putchar('\n');
		}
	}
}
