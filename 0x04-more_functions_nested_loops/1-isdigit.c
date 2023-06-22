#include "main.h"
/**
 * _isupper - Checks for a digit (0 trough 9)
 * @c: digit to be checked
 * Return: 1 if c is a digit and 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
