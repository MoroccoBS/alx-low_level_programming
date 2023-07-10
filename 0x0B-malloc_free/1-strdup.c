#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to be copied
 * Return: pointer to the newly allocated space in memory
 */
char *_strdup(char *str)
{
	char *ptr;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(char) * (i + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		ptr[i] = str[i];
	}
	ptr[i] = '\0';
	return (ptr);
}
