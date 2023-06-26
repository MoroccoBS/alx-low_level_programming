#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string to print
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0, i;

	while (str[len] != '\0')
	{
		len++;
	}
	for (i = len / 2; i <= len; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
