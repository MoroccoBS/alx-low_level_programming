#include "main.h"
/**
 * _isdigit - Checks for a digit (0 trough 9)
 * @c: digit to be checked
 * Return: 1 or 0
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


