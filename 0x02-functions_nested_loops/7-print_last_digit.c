#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @d: number to be checked
 * Return: the value of the digit
 */
int print_last_digit(int d)
{
	if (d < 0)
		d = -d;

	_putchar(d + '0');
	return (d % 10);
}
