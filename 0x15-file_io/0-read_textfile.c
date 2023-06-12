#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"
#define BUFSIZE 1024

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of characters to print
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int text;
	ssize_t sum, read_o, write_one;
	char buf[BUFSIZE];

	if (filename == NUll)
		return (0);
	text = open(filename, O_RDONLY);
	if (text == -1)
		return (0);
	sum = 0;
	while ((read_o = read(text, buf, letters > BUFSIZE ? BUFSIZE : letters)) > 0)
	{
		write_one = write(STDOUT_FILENO, buf, read_o);
		if (write_one == -1 || write_one != read_o)
		{
			close(text);
			return (0);
		}
		sum += write_one;
		letters -= read_o;
	}
	close(text);
	if (read_o == -1)
		return (0);
	return (sum);
}
