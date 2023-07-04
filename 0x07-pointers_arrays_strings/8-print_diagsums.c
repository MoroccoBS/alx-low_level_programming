#include "main.h"
/**
 * print_diagsums - a function that prints the sum
 * @a: Input
 * @size: size of matrix
 * Return: None
 */
void print_diagsums(int *a, int size)
{
	int sum = 0, sum_2 = 0;
	int y;

	for (y = 0; y < size; y++)
	{
		sum = sum + a[y * size + y];
	}
	for (y = size - 1; y >= 0; y--)
	{
		sum_2 = sum_2 + a[y * size + (size - y - 1)];
	}
	printf("%d, %d\n", sum, sum_2);
}
