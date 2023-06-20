#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @d: number to be checked
 * Return: the value of the digit
 */
int print_last_digit(int d)
{
	int a;

	if (d < 0)
		d = -d;
	a = d % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');
	return (a);
}
