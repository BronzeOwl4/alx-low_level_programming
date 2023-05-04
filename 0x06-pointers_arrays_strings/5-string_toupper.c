#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: pointer
 * Return: Always 0
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		str[i] = string_toupper(str[i]);
		i++;
	}
}
