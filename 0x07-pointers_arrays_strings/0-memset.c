#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte
 * @s: area to be filled
 * @b: constant
 * @n: number of bytes
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
