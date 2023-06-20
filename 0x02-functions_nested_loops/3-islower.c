#include "main.h"
/**
 * _islower - cheks for lowercase character
 *
 * Return: (1) succes (0) otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
