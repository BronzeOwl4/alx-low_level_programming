#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: string one
 * @src: string two
 * @n: bytes
 *
 * Return: Always 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
