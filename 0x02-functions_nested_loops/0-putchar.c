#include<stdio.h>
#include "main.h"
/**
 * main - Print Putchar
 *
 * Return: Always (0) success
 */
int main(void)
{
	custom_putchar('A');
	return(0);
}
int custom_putchar(char c)
{
	return(putchar(c));
}
