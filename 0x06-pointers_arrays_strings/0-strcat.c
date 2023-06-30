#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: src string
 * @src: string to be concatenates
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int len = 0;
	int j = 0;

	while (dest[len] != '\0')
	{
		len++;
	}
	while (src[j] != '\0')
	{
		dest[len + j] = src[j];
		j++;
	}
	dest[len + j] = '\0';
	return (dest);
	putchar('\n');
}
