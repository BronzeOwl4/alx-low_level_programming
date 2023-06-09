#include <stdio.h>
#include "main.h"

/**
 * get_endianness - checks the endianness of the processor
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int number = 1;

	if (*(char *)&number == 1)
		return (1);
	else
		return (0);
}
