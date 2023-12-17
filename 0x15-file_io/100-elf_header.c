#include "main.h"
/**
 * display_elf_header_info - self explanatory
 * @elf_header: pointer to elf header
 * Return: void
 */
void display_elf_header_info(const Elf64_Ehdr *elf_header)
{
	int i;

	printf("Elf Header:\n");
	printf("   Magic:    ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", elf_header->e_ident[i]);
	}
	printf("\n");
	printf("    Class: %s\n", elf_header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
	printf("    Data: %s\n", elf_header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf("    Version: %d (current)\n", elf_header->e_ident[EI_VERSION]);
	printf("    OS/ABI: %d\n", elf_header->e_ident[EI_OSABI]);
	printf("    ABI Version: %d\n", elf_header->e_ident[EI_ABIVERSION]);
	printf("    Type: %s\n", elf_header->e_type == ET_EXEC ? "EXEC (Executable file)" : "Unknown");
	printf("    Entry point address: %#lx\n", (unsigned long)elf_header->e_entry);
}

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int fd;
	Elf64_Ehdr elf_header;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		perror("Error opening file");
		exit(98);
	}
	
	if (read(fd, &elf_header, sizeof(elf_header)) != sizeof(elf_header))
	{
		perror("Error reading ELF header");
		close(fd);
		exit(98);
	}

	if (lseek(fd, 0, SEEK_SET) == -1)
	{
		perror("Error seeking to the beginning of the file");
		close(fd);
		exit(98);
	}

	display_elf_header_info(&elf_header);
	close(fd);
	return (0);
}
