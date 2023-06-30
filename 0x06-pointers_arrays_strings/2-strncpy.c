#include "main.h"
/**
 * _strncpy - a function that copies a string
 * @dest: First string
 * @src: second string
 * @n: number of bytes
 * Return: The result
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len = 0;
	int j = 0;
	int i = 0;

	while (dest[len] != '\0')
	{
		len++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[len] = src[j];
	}
	while (dest[i] < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
	putchar('\n');
}
