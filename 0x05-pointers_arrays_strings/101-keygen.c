#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	char password[100];
	int password_length = 0;
	int sum = 0;
	int diff;

	srand(time(NULL));

	while (sum < 2772)
	{
		password[password_length] = rand() % 94 + 33;
		sum += password[password_length];
		password_length++;
	}
	password[password_length] = '\0';

	diff = sum - 2772;
	i = 0;

	while (i < password_length)
	{
		if (password[i] - diff >= 33)
		{
			password[i] -= diff;
			break;
		}
		i++;
	}
	printf("%s\n", password);
	return (0);
}
