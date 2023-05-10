#include "main.h"

/**
 * is_prime_helper - helper function to determine if a number is prime
 * @n: integer to check if it is prime
 * @i: integer to keep track of the current divisor value
 *
 * Return: 1 if n is a prime number, otherwise return 0
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
	if (n % i == 0)
	{
		return (0);
	}
	return (is_prime_helper(n, i + 1));
}
/**
 * is_prime_number - checks if an integer is a prime number
 * @n: integer to check if it is prime
 *
 * Return: 1 if n is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}
