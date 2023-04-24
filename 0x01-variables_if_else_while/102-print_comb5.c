#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int a, b;

	for (a = 0; a <= 99; a++)
	{
		for (b = a; b <= 99; b++)
		{
			if (c != d)
			{
				putchar(c /10 + '0');
				putchar(c % 10 + '0');
				putchar(' ');
				putchar(d / 10 + '0');
				putchar(d % 10 + '0');
				if (c != 98 || d != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
