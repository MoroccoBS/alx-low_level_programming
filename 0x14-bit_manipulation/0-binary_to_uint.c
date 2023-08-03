#include "main.h"

/**
 * int binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int len = strlen(b);
	int i;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; i < len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return 0;
		}

		result = result * 2 + (b[i] - '0');
	}
	return (result);
}
