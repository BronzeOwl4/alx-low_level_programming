#include <stdio.h>
#include "main.h"

/**
 * _strcpy - copies the string
 * @dest: pointer to the buffer
 * @src: pointer to the string
 *
 * Return: Always 0
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
