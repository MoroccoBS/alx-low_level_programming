#include "main.h"
/**
 * is_palindrome_helper - helps the first function
 * @start: start
 * @end: end
 * Return: void
 */
int is_palindrome_helper(char *start, char *end)
{
	if (start >= end)
	{
		return (1);
	}

	if (*start != *end)
	{
		return (0);
	}

	return (is_palindrome_helper(start + 1, end - 1));
}
/**
 * is_palindrome - a function that checks if a string is a palindrome
 * @s: string
 * Return: void
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	return (is_palindrome_helper(s, s + len - 1));
}
