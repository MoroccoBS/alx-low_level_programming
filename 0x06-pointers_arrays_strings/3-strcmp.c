#include "main.h"
/**
 * _strcmp - a function that compares two string
 * @s1: First String
 * @s2: Second String
 * Return: the compared strings
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int dif = 0;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			dif = s1[i] - s2[i];
			break;
		}
	}
	return (dif);
}
