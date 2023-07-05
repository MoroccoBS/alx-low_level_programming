#include "main.h"
/**
 * is_prime_number - returns 1 if a prime number, otherwise return 0
 * @n: Number
 * Return: int
 */
int is_prime_number(int n)
{
	int divisor = 5;
	int increment = 2;

	if (n <= 1)
	{
		return (0);
	}
	if (n == 2 || n == 3)
	{
		return (1);
	}
	if (n % 2 == 0 || n % 3 == 0)
	{
		return (0);
	}
	if (n % divisor == 0)
	{
		return (0);
	}
	divisor += increment;
	increment = 6 - increment;
	if (n % divisor == 0)
	{
		return (0);
	}
	divisor += increment;
	increment = 6 - increment;
	if (n % divisor == 0)
	{
		return (0);
	}
	return (1);
}
