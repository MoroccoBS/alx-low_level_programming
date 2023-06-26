#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: string parameter
 * Return: void
 */
void puts2(char *str)
{
	int len = 0;
	int t = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		len++;
	}
	t = len - 1;
	for (o = 0 ; o <= t ; o++)
	{
		if (o % 2 == 0)
		{
			putchar(str[o]);
		}
	}
	putchar('\n');
}

