#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard 
 * output.
 * filename: filename
 * letters: the number of letters it should read and print
 * Return: the number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t read_count, write_count;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close (fd);
		return (0);
	}
	read_count = read(fd, buffer, letters);
	if (read_count == -1)
	{
		free (buffer);
		close (fd);
		return (0);
	}
	write_count = write(STDOUT_FILENO, buffer, letters);
	if (write_count == -1 || write_count != read_count)
	{
		free (buffer);
		close (fd);
		return (0);
	}
	free (buffer);
	close (fd);
	return (write_count);
}