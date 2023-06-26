#include "main.h"
/**
 * puts2 - prints every other character of a string, starting with the first character
 * @str: string parameter
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		printf("%c", str[i]);
		i += 2;
	}
	printf("\n");
}
