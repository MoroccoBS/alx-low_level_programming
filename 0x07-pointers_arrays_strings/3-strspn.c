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
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (length);
}
