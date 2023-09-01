#include "main.h"
/**
 * set_bit - sets the value of a bit at a given index
 * @n: number
 * @index: index
 * Return: 1 if set or -1 if index is out of range
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n |= (1UL << index);

	return (1);
}
