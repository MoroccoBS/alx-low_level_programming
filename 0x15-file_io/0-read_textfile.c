#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to the POSIX standard output.
 * @filename: name of the file to be read.
 * @letters: number of letters to be printed.
 * Return: number of letters printed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (!fd)
	{
		return (-1);
	}
	buf = malloc(sizeof(char) * (letters));
	if (!buf)
	{
		return (0);
	}
	nrd = read(fd, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);
	close(fd);
	free(buf);
	return (nwr);
}