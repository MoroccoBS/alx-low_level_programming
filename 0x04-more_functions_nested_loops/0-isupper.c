#include "main.h"
/**
 * _isupper - Checks for upper case characters
 * @c: letter to be checked
 * Return: 1 if uppercase and 0 if otherwise
 */
int _isupper(int c)
{
	if (c > 'A' && c < 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
