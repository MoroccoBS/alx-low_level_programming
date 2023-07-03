#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: String
 * @accept: char to be printed
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[i] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				length++;
				break;
			}
			else if (accept[j + 1] == '\0')
			{
				return (length);
			}
		}
	}
	return (length);
}
