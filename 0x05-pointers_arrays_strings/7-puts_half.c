#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string to print
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0, i;
	int start;

	while (str[len] != '\0')
	{
		len++;
	}
	start = len / 2;
	if (start % 2 == 0)
	{
		start = (len +1) / 2;
	}
	for (i = start / 2; i <= len; i++)
	{
		if (len / 2)
		putchar(str[i]);
	}
	putchar('\n');
}
