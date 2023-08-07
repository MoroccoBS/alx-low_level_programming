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

	FILE *file = fopen(filename, "r");
	if (file == NULL)
	{
		return 0;
	}

	char buffer[letters];
	ssize_t bytesRead = fread(buffer, sizeof(char), letters, file);
	if (bytesRead <= 0)
	{
		fclose(file);
		return 0;
	}

	ssize_t bytesWritten = fwrite(buffer, sizeof(char), bytesRead, stdout);
	fclose(file);

	if (bytesWritten != bytesRead)
	{
		return 0;
	}

	return bytesWritten;
}