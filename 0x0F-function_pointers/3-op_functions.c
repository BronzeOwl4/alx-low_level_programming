#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - add two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtract two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: result of dividing a by b, or 0 if division by zero
 */
int op_div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	else
	{
		/* Handle division by zero error */
		printf("Error: Division by zero\n");
		return (0);
	}
}
/**
 * op_mod - calculate remainder of division of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: remainder of dividing a by b, or 0 if division by zero
 */
int op_mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
	else
	{
		/* Handle division by zero error */
		printf("Error: Division by zero\n");
		return (0);
	}
}
