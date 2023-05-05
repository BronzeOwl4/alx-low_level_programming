#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

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

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	while (num / divisor > 9)
	{
		_putchar('0' + num / divisor);
		num %= divisor;
		divisor /= 10;
	}
}
