#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: pointer
 *
 * Return: Always 0
 */
char *cap_string(char *s)
{
	char separators[] = " \t\n,;.!?\"(){}";
	bool new_word = true;
	int i = 0;

	while (s[i])
	{
		if (new_word && isalpha(s[i]))
		{
			s[i] = toupper(s[i]);
			new_word = false;
		}
		else if (strchr(separators, s[i]))
			new_word = true;
		i++;
	}
	return (s);
}
