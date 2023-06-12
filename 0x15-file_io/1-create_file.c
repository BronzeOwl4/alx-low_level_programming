#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * create_file - creates a file with given content
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int filejam;

	if (!filename)
		return (-1);
	filejam = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (!filejam == -1)
		return (-1);
	if (text_content)
	{
		if (write(filejam, text_content, strlen(text_content)) == -1)
		{
			return (-1);
		}
	}
	close(filejam);
	return (1);
}
