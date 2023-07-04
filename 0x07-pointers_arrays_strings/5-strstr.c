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
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}