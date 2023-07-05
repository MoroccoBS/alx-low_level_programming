#include "main.h"
/**
 * is_palindrome - a function that returns 1 if a string is a palindrome and 0 if not
 * @s: string
 * Return: void
 */
int is_palindrome(char *s)
{
	int i, j;
	int len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	for (i = 0, j = len - 1; i < len; i++, j--)
	{
		if (s[i] != s[j])
		{
			return (0);
		}
	}
	return (1);
}
