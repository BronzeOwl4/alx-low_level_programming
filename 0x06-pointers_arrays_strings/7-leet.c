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
		char c = tolower(s[i]);

		if (c == 'a' && 'A')
			s[i] = '4';
		else if (c == 'e' && 'E')
			s[i] = '3';
		else if (c == 'o' && 'O')
			s[i] = '0';
		else if (c == 't' && 'T')
			s[i] = '7';
		else if (c == 'l' && 'L')
			s[i] = '1';
		i++;
	}
	return (s);
}
