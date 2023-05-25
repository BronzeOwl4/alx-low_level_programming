#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters
 * @...: list of arguments
 *
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int b, sum;
	va_list ap;

	if (n == 0)
		return (0);
	va_start(ap, n);
	for (b = sum = 0; b < n; b++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
