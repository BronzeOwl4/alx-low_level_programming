#include <ctype.h>
#include "main.h"
/**
 * _isalpha - checksif a character is an alphabetical character
 * @c: character to be checked
 *
 * Return: 1 if c is a letter (lowercase or uppercase), 0 otherwise
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
