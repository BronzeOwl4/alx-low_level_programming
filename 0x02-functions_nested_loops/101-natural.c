#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sum = 0;

	for (int i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 ||  i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
}