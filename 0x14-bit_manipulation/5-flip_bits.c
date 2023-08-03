#include "main.h"
/**
 * flip_bits - flips bits in a given number
 * @n: number
 * @m: number
 * Return: number
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result != 0)
	{
		count++;
		xor_result &= (xor_result - 1);
	}

	return (count);
}
