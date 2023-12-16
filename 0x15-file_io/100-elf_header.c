#include "main.h"
/**
 * error_and_exit - prints system error message and exits
 * @msg: message
 * Return: void
 */
void error_and_exit(char *msg)
{
	perror(msg);
	exit(98);
}

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int fd, i;
	Elf64_Ehdr ehdr;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}
	
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		error_and_exit("Error opening file");
	}

	if (read(fd, &ehdr, sizeof(ehdr)) != sizeof(ehdr))
	{
		error_and_exit("Error opening file");
	}
	
	if (ehdr.e_ident[EI_MAG0] != ELFMAG0 || ehdr.e_ident[EI_MAG1] != ELFMAG1 || ehdr.e_ident[EI_MAG2] != ELFMAG2 || ehdr.e_ident[EI_MAG3] != ELFMAG3)
	{
		fprintf(stderr, "Not an ELF file\n");
		return (98);
	}

	printf("Magic: ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", ehdr.e_ident[i]);
	}
	printf("\n");

	printf("Class: %s\n", ehdr.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("Data: %s\n", ehdr.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement big endian");
	printf("Version: %d (current)\n", ehdr.e_ident[EI_VERSION]);
	printf("OS/ABI: UNIX - System V\n");
	printf("ABI Version: %d\n", ehdr.e_ident[EI_OSABI]);
	printf("Type: %d\n", ehdr.e_type);
	printf("Entry point address: 0x%lx\n", ehdr.e_entry);

	close(fd);
	return (0);
}
