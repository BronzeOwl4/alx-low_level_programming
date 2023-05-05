#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: pointer
 *
 * Return: Always 0
 */
char *leet(char *s)
{
	int i = 0;

	while (s[i])
	{
		char c = s[i];

		if (c == 'a')
			s[i] = '4';
		else if (c == 'A')
			s[i] = '4';
		else if (c == 'e')
			s[i] = '3';
		else if (c == 'E')
			s[i] = '3';
		else if (c == 'o')
			s[i] = '0';
		else if (c == 'O')
			s[i] = '0';
		else if (c == 't')
			s[i] = '7';
		else if (c == 'T')
			s[i] = '7';
		else if (c == 'l')
			s[i] = '1';
		else if ( c == 'L')
			s[i] = '1';
		i++;
	}
	return (s);
}
