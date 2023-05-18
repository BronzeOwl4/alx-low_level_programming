#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	char *ptr;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (ptr = argv[1]; *ptr; ptr++)
	{
		if (!isdigit(*ptr))
		{
			printf("Error\n");
			exit(98);
		}
	}
	for (ptr = argv[2]; *ptr; ptr++)
	{
		if (!isdigit(*ptr))
		{
			printf("Error\n");
			exit(98);
		}
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	printf("%d\n", num1 * num2);
	return (0);
}
