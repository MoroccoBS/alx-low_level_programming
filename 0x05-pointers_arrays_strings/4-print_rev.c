#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string to be reversed
 * Return: void
 */
void print_rev(char *s)
{
	int len = 0;
	char *i = s + len - 1;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	while (i >= s)
	{
		printf("%c", *i);
		i--;
	}
	printf("n");
}
