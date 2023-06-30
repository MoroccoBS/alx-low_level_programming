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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
	putchar('\n');
}
