#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string
 * @str: character used
 *
 * Return: Always 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
