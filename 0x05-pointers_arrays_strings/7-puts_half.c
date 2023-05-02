#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: character
 *
 * Return: Always 0
 */
void puts_half(char *str)
{
	int length = 0;
	int start;
	int i;

	while (str[length] != '\0')
	{
		length++;
	}
	start = length / 2;

	if (length % 2 != 0)
	{
		start = (length - 1) / 2 + 1;
	}
	i = start;

	while (i < length)
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
