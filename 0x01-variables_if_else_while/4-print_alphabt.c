#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always (0) success
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'z')
		{
			putchar(ch);
		}
	};
	putchar('\n');
	return (0);
}
