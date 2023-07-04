#include "main.h"
/**
 * _strstr - a function that locates a substring
 * @haystack: String
 * @needle: SubString
 * Return: a pointer to the beginning of the located substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		while (*haystack == *needle && *needle != '\0')
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
			return (haystack);
	}
	return (0);
}
