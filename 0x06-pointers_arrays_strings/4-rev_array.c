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
	for (int a = 0; a < n / 2; a++)
	{
		int temp = arr[a];

		arr[a] = arr[n - 1 - a];
		arr[n - 1 - a] = temp;
	}
}
