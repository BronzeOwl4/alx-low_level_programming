#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * _strcat - concatenates two strings
 * @src : string one
 * @dest: string two
 *
 * Return: Always 0
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
