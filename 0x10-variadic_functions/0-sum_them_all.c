#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters
 *
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list val;
	unsigned int a, sum = 0;

	if (n == 0)
		return (0);
	va_start(val, n);

	for (a = 0; a < n; a++)
		sum += va_arg(val, int);
	va_end(val);

	return (sum);
}
