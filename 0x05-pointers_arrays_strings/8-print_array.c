#include "main.h"
/**
 * print_array - prints n elements of an array of integers
 * @a: array
 * @n: number of elements i the array
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	if (n > 0)
	{
		printf("%d", a[0]);
		i++;
		while (i < n)
		{
			printf(", %d", a[i]);
			i++;
		}
	}
	printf("\n");
}
