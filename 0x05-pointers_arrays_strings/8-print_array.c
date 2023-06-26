#include "main.h"
/**
 * print_array - prints n elements of an array of integers
 * @a: array
 * @n number of elements i the array
 * Return: void
 */
void print_array(int *a, int n)
{
	int len = 0;
	int i = 0;

	while (a[len] != '\0')
	{
		len++;
	}
	while (i < len)
	{
		print("%d, ", a[i]);
		i++;
	}
	print("\n");
