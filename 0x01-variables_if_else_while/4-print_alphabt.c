#include <stdio.h>
/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int i;

	for (i = 1; i < 26; i++)
	{
		if (i != 5 && i !=  17)
		{
			printf("%d", i);
		}
	}
	putchar('\n');
	return (0);
}
