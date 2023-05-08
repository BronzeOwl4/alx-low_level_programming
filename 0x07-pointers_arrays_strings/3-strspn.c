#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer one
 * @accept: pointer two
 *
 * Return: number of bytes in first segment of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *a;

	while (*s && (a = accept))
	{
		while (*a)
			if (*s == *a++)
			{
				count++;
				break;
			}
		if (!*a)
			break;
		s++;
	}
	return (count);
}
