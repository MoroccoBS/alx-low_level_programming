#include "main.h"
/**
 * *_strcpy - copies the string pointed
 * @dest: buffer
 * @src: string to be pointed by src
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (dest_start);
}
