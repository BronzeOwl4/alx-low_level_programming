#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @c: character
 * @s: pointer
 *
 * Return: pointer to 1st occurrence of c in string s, or NULL if c not found
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
