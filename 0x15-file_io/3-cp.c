#include "main.h"
/**
 * main - copies the content of one file into another file
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int src_fd, dest_fd, read_size;
	char buffer[BUF_SIZE];

	if (argc != 3)
		dprintf(2, "Usage: cp file_from file_to\n"), exit(97);

	src_fd = open(argv[1], O_RDONLY);
	if (src_fd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	dest_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (dest_fd == -1)
	{
		dprintf(2, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}
	while((read_size = read(src_fd, buffer, BUF_SIZE)) > 0)
	{
		if (write(dest_fd, buffer, read_size) != read_size)
			dprintf(2, "Error: Can't write to file %s\n", argv[1]), exit(99);
	}
	if (read_size < 0)
		dprintf(2, "Error: Can't read from file %s\n", argv[2]), exit(98);

	if (close(src_fd) == -1)
	{
		dprintf(2, "Error: Can't close file %s\n", argv[1]);
		exit(100);
	}
	if (close(dest_fd) == -1)
	{
		dprintf(2, "Error: Can't close file %s\n", argv[2]);
		exit(100);
	}
	return (0);
}
