#include "main.h"
/**
 * leet - a function that encodes a string into 1337
 * @str: string to be encoded
 * Return: encoded string
 */
char *leet(char *str)
{
	int i, j;
	char* letters = "aAeEoOtTlL";
	char* replacment = "4433007711";
	char* encoded; 
	for (i = 0; str[i] != '\0'; i++)
	{
		encoded[i] = str[i];
		for (j = 0; letters[i] != '\0'; j++)
		{
			if (str[i] == letters[j])
			{
				encoded[i] = replacment[j];
				break;
			}
		}
	}
	return (encoded);
}
