#include "main.h"

/**
 * _sqrt_helper - keep track
 * _sqrt_recursion - returns the natural square root of a number
 * @i: integer
 * @n: squareroot
 *
 * Return: Always 0
 */
int _sqrt_helper(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (_sqrt_helper(n, i + 1));
}
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_helper(n, 0));
}
