#include "main.h"

/**
 * is_prime_number - input integer
 * is_prime_helper - keep track
 * @n: integer one
 * @i: integer two
 *
 * Return: returns 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_helper(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (i * i > n)
	{
		return (1);
	}
	if (n % 1 == 0)
	{
		return (0);
	}
	return (is_prime_helper(n, i + 1));
}
int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}
