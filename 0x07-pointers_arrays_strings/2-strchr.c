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
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (0);
}
