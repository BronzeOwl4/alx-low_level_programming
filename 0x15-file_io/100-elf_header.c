#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <elf.h>
#include <fcntl.h>

#define ERROR_MSG "Error: Not an ELF file\n"

/**
 * print_header_info - prints the ELF header information
 * @header: the ELF header struct
 */
void print_header_info(Elf64_Ehdr header);

/**
 * main - entry point
 * @argc: the argument count
 * @argv: the argument vector
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}

	fd = open(argv[1], O_RDONLY);

	if (fd == -1)
	{
		perror("Error");
		return (98);
	}

	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		fprintf(stderr, ERROR_MSG);
		close(fd);
		return (98);
	}
	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
			header.e_ident[EI_MAG1] != ELFMAG1 ||
			header.e_ident[EI_MAG2] != ELFMAG2 ||
			header.e_ident[EI_MAG3] != ELFMAG3)
	{
		fprintf(stderr, ERROR_MSG);
		close(fd);
		return (98);
	}
	print_header_info(header);
	close(fd);
	return (0);
}
/**
 * print_header_info - prints the ELF header information
 * @header: the ELF header struct
 */
void print_header_info(Elf64_Ehdr header)
{
	int i;

	printf("Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header.e_ident[i]);
	}
	printf("\nClass:  %s\n",
			header.e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
	printf("Data:   %s\n",
			header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" :
			header.e_ident[EI_DATA] == ELFDATA2MSB ? "2's complement, big endian" :
			"Invalid data encoding");
	printf("Version:  %d\n", header.e_ident[EI_VERSION]);
	printf("OS/ABI:  %d\n", header.e_ident[EI_OSABI]);
	printf("ABI Version:  %d\n", header.e_ident[EI_ABIVERSION]);
}
