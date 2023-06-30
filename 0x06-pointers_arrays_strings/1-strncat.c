#include "main.h"
/**
 * _strncat - a function that concatenates two strings
 * @dest: First string
 * @src: second string
 * @n: Bytes of src
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int j = 0;

	while (dest[len] != '\0')
	{
		len++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[len + j] = src[j];
		j++;
	}
	dest[len + j] = '\0';
	return (dest);
	putchar('\n');
}
