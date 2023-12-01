#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int src_file, dest_file, read_size;
	char buffer[BUF_SIZE];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit (97);
	}
	src_file = open(argv[1], O_RDONLY);
	if (src_file < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit (98);
	}
	dest_file = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (dest_file < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit (99);
	}
	while ((read_size = read(src_file, buffer, BUF_SIZE)) > 0)
	{
		if (write(dest_file, buffer, read_size) != read_size)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit (99);
		}
	}
	if (read_size < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit (98);
	}
	if (close(src_file) < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", src_file);
		exit (100);
	}
	if (close(dest_file) < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", dest_file);
		exit (100);
	}
	return (0);
}
