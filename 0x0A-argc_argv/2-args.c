#include <stdio.h>
/**
 * main - Main function
 * @argc: number of command-line arguments passed
 * @argv: array of strings
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int i;

	(void)argv;
	(void)argc;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
