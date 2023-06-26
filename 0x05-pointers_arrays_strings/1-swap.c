#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: intiger to be swaped
 * @b: intiger to be swaped
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int dummy = *a;

	*a = *b;
	*b = dummy;
}
