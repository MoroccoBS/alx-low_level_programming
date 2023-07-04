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
int main(void)
{
    int c3[3][3] = {
        {0, 1, 5},
        {10, 11, 12},
        {1000, 101, 102},
    };
    int c5[5][5] = {
        {0, 1, 5, 12124, 1234},
        {10, 11, 12, 123521, 12512},
        {1000, 101, 102, 12545, 214543435},
        {100, 1012451, 11102, 12545, 214543435},
        {10, 12401, 10452, 11542545, 1214543435},
    };
    print_diagsums((int *)c3, 3);
    print_diagsums((int *)c5, 5);
    return (0);
}
