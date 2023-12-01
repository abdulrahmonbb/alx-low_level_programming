#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int src_fd, dest_fd, read_size;
	char buffer[BUF_SIZE];

	if (argc != 3)
	{
		dprint
