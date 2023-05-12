#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char **argv)
{
	int result;

	if (argc != 3)
	{
		fprintf(stderr, "Error\n");
		return (1);
	}
	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);
	return (0);
}
