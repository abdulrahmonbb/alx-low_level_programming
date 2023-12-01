#include "main.h"
/**
 * main - copies the content of a file into another file
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int src_fd, dest_fd;
	int num1 = 1024, num2 = 0;
	char buffer[1024];

	if (argc != 3)
		dprintf(2, "Usage: cp file_from file to\n"), exit(97);

	src_fd = open(argv[1], O_RDONLY);
	if (src_fd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	dest_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (dest_fd == -1)
	{
		dprintf(2, "Error: Can't write to file %s\n", argv[2]), exit(99);
	}
	while (num1 == 1024)
	{
		num1 = read(src_fd, buffer, 1024);
		if (num1 == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		num2 = write(dest_fd, buffer, num1);
		if (num2 < num1)
			dprintf(2, "Error: Can't write to file %s\n", argv[2]), exit(99);
	}
	if (close(src_fd) == -1)
		dprintf(2, "Error: Can't close fd %d\n", src_fd), exit(100);

	if (close(dest_fd) == -1)
		dprintf(2, "Error: Can't close fd %d\n", dest_fd), exit(100);

	return (0);
}
