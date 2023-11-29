#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file;
 * @filename: file string name
 * @text_content: text string to be appended
 * Return: 1 on success and -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, length;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	length = strlen(text_content);
	if (text_content != NULL)
	{
		write(fd, text_content, length);
	}
	close (fd);
	return (1);
}
