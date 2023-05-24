#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: 0 on success, 1 or 2 on error
 */
int main(int argc, char *argv[])
{
	char *o = (char *) main;
	int a, bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (a = 0; a < bytes; a++)
	{
		printf("%02x", o[a] & 0xFF);
		if (a != bytes - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
