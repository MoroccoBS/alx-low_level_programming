#include "main.h"
/**
 * rot13 - a function that encodes a string into rot13
 * @str: string to be encoded
 * Return: encoded string
 */
char *rot13(char *str)
{
	int i, j;
	char am[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == am[j])
			{
				str[i] = rot[i];
				break;
			}
		}
	}
	return (str);
}
