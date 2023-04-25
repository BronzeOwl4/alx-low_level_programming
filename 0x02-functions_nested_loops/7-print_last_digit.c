#include <ctype.h>
#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 * @i: The number whose last digit is to be printed
 *
 * Return: The last digit of the number
 */
int print_last_digit(int i)
{
	int j = i % 10;

	if (j < 0)
	{
		j = -j;
	}
	_putchar(j + '0');
	return (j);
}
