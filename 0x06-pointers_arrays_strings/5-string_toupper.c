#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 *  @s: pointer
 *
 * Return: Always 0
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		s[i] = toupper(s[i]);
		i++;
	}
	return (s);
}
