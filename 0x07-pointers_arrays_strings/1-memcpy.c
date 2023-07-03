#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: Destenation
 * @src: Source
 * @n: Bytes
 * Return: a poniter to destenation
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
