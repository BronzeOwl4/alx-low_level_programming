#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: pointer one
 * @src: pointer two
 * @n: bytes
 *
 * Return: Always 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
