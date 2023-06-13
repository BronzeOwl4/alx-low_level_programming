#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

#define BUFSIZE 1024

/**
 * check_argc - checks if the number of arguments is correct
 * @argc: argument count
 */
void check_argc(int argc)
{
	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * open_files - opens the source and destination files
 * @argv: array of argument tokens
 * @fd_from: pointer to the source file descriptor
 * @fd_to: pointer to the destination file descriptor
 */
void open_files(char *argv[], int *fd_from, int *fd_to)
{
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	*fd_from = open(argv[1], O_RDONLY);

	if (*fd_from == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	*fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);

	if (*fd_to == -1)
	{
		fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * copy_file - copies the content of the source file to the destination file
 * @fd_from: source file descriptor
 * @fd_to: destination file descriptor
 * @argv: array of argument tokens
 */
void copy_file(int fd_from, int fd_to, char *argv[])
{
	int bytes_read;
	char buffer[BUFSIZE];

	while ((bytes_read = read(fd_from, buffer, BUFSIZE)) > 0)
	{
		if (write(fd_to, buffer, bytes_read) != bytes_read)
		{
			fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
}

/**
 * close_files - closes the source and destination files
 * @fd_from: source file descriptor
 * @fd_to: destination file descriptor
 */
void close_files(int fd_from, int fd_to)
{
	if (close(fd_from) == -1)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: array of argument tokens
 *
 * Return: 0 on success, exit with various codes on failure
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	check_argc(argc);
	open_files(argv, &fd_from, &fd_to);
	copy_file(fd_from, fd_to, argv);
	close_files(fd_from, fd_to);

	return (0);
}
