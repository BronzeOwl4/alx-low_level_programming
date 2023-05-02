#include <stdio.h>
#include "main.h"

/**
 * rev_string - reverses a string
 * @s: - pointer
 *
 * Return: Always 0
 */
void rev_string(char *s)
{
	int length = 0;
	int start;
	int end;
	char temp;

	while (s[length] != '\0')
	{
		length++;
	}
	start = 0;
	end = length - 1;

	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}
