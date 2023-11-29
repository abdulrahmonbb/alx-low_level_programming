#include "main.h"
/**
 * create_file - creates a file
 * @filename: file string name
 * @text_content: string to write to the file
 * Return: 1 on success -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len;
	ssize_t write_count;

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close (fd);
		return (-1);
	}
	len = strlen(text_content);
	write_count = write(fd, text_content, len);
	if (write_count == -1 || (int) write_count != len)
	{
		close (fd);
		return (-1);
	}
	close (fd);
	return (1);
}
