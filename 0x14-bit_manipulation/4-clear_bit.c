#include "main.h"
/**
 * clear_bit - sets the value of a bit at a given index
 * @n: number
 * @index: index
 * Return: 1 if set or -1 if index is out of range
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = ~(1UL << index);

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n = *n & mask;
	return (1);
}
