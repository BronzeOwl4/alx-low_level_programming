#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be searched
 * @accept: prefix to be measured
 *
 * Return: number of bytes in first segment of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int ind;

	while (*s)
	{
		ind = 0;

		while (accept[ind])
			if (*s == accept[ind])
			{
				count++;
				break;
			}
			else if (accept[ind + 1] == '\0')
				return (count);
	}
		s++;
	}
	return (count);
}
