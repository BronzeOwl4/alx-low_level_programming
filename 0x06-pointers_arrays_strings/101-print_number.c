#include <stdio.h>
#include <ctype.h>
#include <limits.h>
#include "main.h"
#include <_putchar.c>

/**
 * print_number - prints an integer
 * @n: integer to be printed
 *
 * Return: Always 0
 */
void print_number(int n)
{
	int divisor = 1;
	int num = n;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (num)
	{
		divisor *= 10;
		num /= 10;
	}
	divisor /= 10;
	while (divisor >= 1)
	{
		_putchar((n / divisor) + '0');
		n %= divisor;
		divisor /= 10;
	}
}
