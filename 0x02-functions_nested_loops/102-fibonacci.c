#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d = 0;
	long a = 1, b = 2;

	while (d < 50)
	{
		if (d == 0)
			printf("%ld", a);
		else if (d == 1)
			printf(", %ld", b);
		else
		{
			b += a;
			a = b - a;
			printf(", %ld", b);
		}
		++d;
	}
	printf("\n");
	return (0);
}
