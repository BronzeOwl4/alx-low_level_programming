#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string to be searched
 * @accept: sett of bytes searched for
 *
 * Return: pointer or null
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		int ind = 0;

		while (accept[ind])
		{
			if (*s == accept[ind])
				return (s);
			ind++;
		}
		s++;
	}
	return ('\0');
}
