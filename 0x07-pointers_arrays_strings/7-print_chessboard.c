#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: chessboard to be printed
 *
 * Return: Always 0
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j;

	while (i < 8)
	{
		j = 0;

		while (j < 8)
		{
			_putchar(a[i][j]);
			_putchar(' ');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
