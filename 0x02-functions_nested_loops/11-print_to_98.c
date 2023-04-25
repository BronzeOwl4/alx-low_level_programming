#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * print_to_98 - prints all natural numbers
 *
 *@n: the starting number
 * Return: from n to 98, followed by a new line
 */
void print_to_98(int n)
{
	int i, n;

	if (n <= 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
	}
	else
	{
		for (i = n; i > 98; i--)
		{
			printf("%d, ", i);
		}
	}
	printf("98\n");
}