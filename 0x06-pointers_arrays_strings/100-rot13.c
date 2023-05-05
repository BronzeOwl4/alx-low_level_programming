#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: pointer
 * alphabet: pointer two
 *
 * Return: Always 0
 */
char *rot13(char *s)
{
	int i = 0;
	char *alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rot13 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (s[i] != '\0')
	{
		int j = 0;

		while (j < 52)
		{
			if (s[i] == alphabet[j])
			{
				s[i] = rot13[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
