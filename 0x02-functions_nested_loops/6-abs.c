#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @val: integer to be checked
 * Return: int
 */
int _abs(int val)
{
	if (val >= 0)
		return (val);
	else
		return (val * -1);
	return (0);
}
