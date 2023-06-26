#include "main.h"
/**
 * print_array - prints n elements of an array of integers
 * @a: array
 * @n number of elements i the array
 * Return: void
 */
void print_array(int *a, int n)
{
	if (n > 0) {
        printf("%d", a[0]);
        for (int i = 1; i < n; i++) {
            printf(", %d", a[i]);
        }
    }
	printf("\n");
}
