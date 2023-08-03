#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: number
 * @index: index
 * Return: value or -1 if index is out of range
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int shifted = n >> index;
	int bit = shifted & 1;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return (bit);
}
