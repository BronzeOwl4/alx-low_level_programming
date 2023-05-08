#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * _strchr - locates a character in a string
 * @c: character
 * @s: pointer
 *
 * Return: pointer to the 1st occurrence of the character c in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
