#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/**
 * append_text_to_file - function that appends text to the end of a file
 * @filename: file being appended to
 * @text_content: string to append
 * Return: 1 on succes, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		fd = open(filename, O_RDONLY);

		if (fd == -1)
		{
			return (-1);
		}

		close(fd);
		return (1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	{
		return (-1);
	}

	bytes_written = write(fd, text_content, strlen(text_content));

	if (bytes_written != strlen(text_content))
	{
		return (-1);
	}

	close(fd);
	return (1);
}
