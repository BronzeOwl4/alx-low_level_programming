#include "main.h"

/**
 * flip_bits - returns no of bits to flip to get from one number to another
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits to flip to get from n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int now = n ^ m;
	unsigned int here = 0;

	while (now)
	{
		here += now & 1;
		now >>= 1;
	}
	return (here);

