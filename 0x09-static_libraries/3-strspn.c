#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be searched
 * @accept: prefix to be measured
 *
 * Return: no of bytes in 1st segment of s which consist only bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int ind;

	while (*s)
	{
		ind = 0;

		while (accept[ind])
		{
			if (*s == accept[ind])
			{
				count++;
				break;
			}
			else if (accept[ind + 1] == '\0')
				return (count);
			ind++;
		}
		s++;
	}
	return (count);
}
