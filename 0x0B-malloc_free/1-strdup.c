#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: pointer
 * @new_str: new string
 *
 * Return: a pointer
 */
char *_strdup(char *str)
{
	char *new_str;
	if (str == NULL)
		return (NULL);
	new_str = malloc(strlen(str) + 1);
	if (new_str == NULL)
		return (NULL);
	strcpy(new_str, str);
	return (new_str);
}
