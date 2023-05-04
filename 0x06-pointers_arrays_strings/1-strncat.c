#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: String one
 * @src: string two
 * @n: bytes
 *
 * Return: Always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
