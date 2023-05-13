#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 * main - function that copies content
 * @argc: number of arguments
 * @argv: array of pointers
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	char buffer[1024];
	size_t bytes_read;

	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);

	if (fd_from == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0666);
	if (fd_to == -1)
	{
		fprintf(stderr, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}
	while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) != 0)
	{
		if ((ssize_t)bytes_read == -1)
		{
			fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		if (write(fd_to, buffer, bytes_read) != (ssize_t)bytes_read)
		{
			fprintf(stderr, "Error: Can't write to file %s\n", argv[2]);
			exit(99);
		}
	}
	close(fd_from);
	close(fd_to);
	return (0);
}
