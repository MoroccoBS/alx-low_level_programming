#include "main.h"
/**
 * main - Print Alphabet
 *
 * Return: Always (0) success
 */
int print_alphabet(void)
{
	char i;
	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');	
	return (0);
}