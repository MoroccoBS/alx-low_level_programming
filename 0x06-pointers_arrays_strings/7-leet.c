#include "main.h"
/**
 * leet - a function that encodes a string into 1337
 * @str: string to be encoded
 * Return: encoded string
 */
char *leet(char *str)
{
	int i, j;
	char letters[] = "aAeEoOtTlL";
	char replacement[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = replacement[j];
			}
		}
	}
	return (str);
}
