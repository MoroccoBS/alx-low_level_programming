#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to the POSIX standard output.
 * @filename: name of the file to be read.
 * @letters: number of letters to be printed.
 * Return: number of letters printed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
	{
		return 0;
	}

	int fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return 0;
	}

	char *buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
	{
		close(fd);
		return 0;
	}

	ssize_t bytesRead = read(fd, buffer, letters);
	if (bytesRead == -1)
	{
		close(fd);
		free(buffer);
		return 0;
	}

	ssize_t bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
	if (bytesWritten == -1 || bytesWritten != bytesRead)
	{
		close(fd);
		free(buffer);
		return 0;
	}

	close(fd);
	free(buffer);
	return bytesRead;
}
