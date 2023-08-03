#include "main.h"
/**
 * print_binary - prints a binary number
 * @param n: binary number
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int flag = 0;

	while (mask > 0)
	{
		if (n & mask)
		{
			printf("1");
			flag = 1;
		}
		else if (flag)
		{
			printf("0");
		}

		mask >>= 1;
	}

	if (!flag)
	{
		printf("0");
	}
}
