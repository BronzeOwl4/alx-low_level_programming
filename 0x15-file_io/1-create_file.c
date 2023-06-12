#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_file - creates a file with rw------- permissions
 * @filename: name of the file to create, if NULL return -1
 * @text_content: contents of the file. If NULL, create an empty file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	FILE *filepage;
	size_t new;

	if (!filename)
		return (-1);
	filepage = fopen(filename, "w");
	if (!filepage)
		return (-1);
	if (text_content)
	{
		new = fwrite(text_content, sizeof(char), strlen(text_content), filepage);
		if (new != strlen(text_content))
		{
			fclose = filepage;
			return (-1);
		}
	}
	fclose(filepage);
	return (1);
}
