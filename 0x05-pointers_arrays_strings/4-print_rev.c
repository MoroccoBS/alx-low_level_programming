#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string to be reversed
 * Return: void
 */
void print_rev(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}

	for (int i = len - 1; i >= 0; i--)
	{
		printf("%d\n", s[i]);
	}
}
