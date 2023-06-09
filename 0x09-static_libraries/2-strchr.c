#include "main.h"

/**
 * _strchr - locates a character in a string
 * @c: character to be located
 * @s: string to be searched
 *
 * Return: If c is found - a pointer to first occurence, if not found - NULL
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return ('\0');
}
