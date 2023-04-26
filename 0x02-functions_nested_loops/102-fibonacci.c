#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 3;
	long long int a = 1, b = 2, c;

	printf("%lld\n%lld\n", a, b);
	while (i <= 50)
	{
		c = a + b;
		printf("%lld\n", c);
		a = b;
		b = c;
		i++;
	}
	printf("\n");
	return (0);
}
