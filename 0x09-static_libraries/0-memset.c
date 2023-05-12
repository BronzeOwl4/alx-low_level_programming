#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory with a constant byte
 *
 * @n: first byte
 * @s: pointer
 * @b: constant byte
 * Return: Always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
