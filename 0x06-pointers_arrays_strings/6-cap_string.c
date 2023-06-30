#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @str: string to be capitalizes
 * Return: String Modified
 */
char *cap_string(char *str)
{
	int len = 0;
	int i;

	while (str[len] != '\0')
	{
		len++;
	}
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}
	for (i = 0; i < len; i++)
	{
		if (str[i] == ' ')
		{
			if (str[i + 1] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
		}
	}
	return (str);
}
