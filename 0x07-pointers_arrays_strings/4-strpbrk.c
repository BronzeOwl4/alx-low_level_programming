#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string one
 * @accept: string two
 *
 * Return: pointer or null
 */
char *_strpbrk(char *s, char *accept)
{
	char *p;

	while(*s)
	{
		p = accept;
		while (*p)
		{
			if (*s == *p)
				return (s);
			p++;
		}
		s++;
	}
	return (0);
}
