#include "main.h"
/**
 * _islower - cheks for lowercase character
 * @c: the letter tha will be pased to the function to check
 * Return: (1) succes (0) otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
