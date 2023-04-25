#include <ctype.h>
#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: the number to be checked
 * Return: 1 & print + if (n>0), 0 & print 0 if (n=0), -1 & print - if (n<0)
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n < 0)
	{
	_putchar('-');
	return (-1);
	}
	else
	{
	_putchar('0');
	return (0);
	}
}
