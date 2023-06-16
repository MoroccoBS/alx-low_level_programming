#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always (0) success
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch < 'e'; ch++)
	{
		putchar(ch);
	};
	for (ch = 'f'; ch < 'q'; ch++)
	{
		putchar(ch);
	};
	for (ch = 'r'; ch <= 'z'; ch++)
	{
		putchar(ch);
	};
	putchar('\n');
	return (0);
}
