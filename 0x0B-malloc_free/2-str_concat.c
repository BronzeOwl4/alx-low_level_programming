#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: string pointer one
 * @s2: string  pointer two
 *
 * Return: NULL on failure,if  passed,treat it as an empty string
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int len1 = 0, len2 = 0;

	if (s1 != NULL)
		len1 = strlen(s1);
	if (s2 != NULL)
		len2 = strlen(s2);
	new_str = malloc(len1 + len2 + 1);
	if (new_str == NULL)
		return (NULL);
	if (s1 != NULL)
		strcpy(new_str, s1);
	if (s2 != NULL)
		strcpy(new_str + len1, s2);
	new_str[len1 + len2] = '\0';
	return (new_str);
}
