#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: integer one
 * @n: the number of elements of the array
 *
 * Return: Always 0
 */
void reverse_array(int *a, int n)
{
	int i = 0;

	while (i < n / 2)
	{
		int temp = a[i];

		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
		i++;
	}
}
