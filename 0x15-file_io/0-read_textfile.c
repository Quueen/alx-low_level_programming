#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Function that reads text file and prints it to STDOUT
 * @filename: file being read
 * @letters: number of letters to be read
 * Return: i - actual number of letters it could read and print
 * 0 otherwise
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char ch;
	size_t i;
	ssize_t fd;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	while (i < letters && (ch = read(fd, &ch, 1)) > 0)
	{
		write(STDOUT_FILENO, &ch, 1);
		i++;
	}
	close(fd);

	return (i);
}
