#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: Always (0) success
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int lastOfn;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastOfn = n % 10;
	if (lastOfn > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastOfn);
	}
	if (lastOfn == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastOfn);
	}
	if (lastOfn < 6 && lastOfn != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastOfn);

	}
	return (0);
}
