#include <stdio.h>
#include <stdlib.h>
/**
 * main - Main function
 * @argc: number of command-line arguments passed
 * @argv: array of strings
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int cents, numCoins = 0;
	int coinValues[] = {25, 10, 5, 2, 1};
	int numCoinTypes = sizeof(coinValues) / sizeof(coinValues[0]);
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < numCoinTypes; i++)
	{
		numCoins += cents / coinValues[i];
		cents %= coinValues[i];
	}
	printf("%d\n", numCoins);
	return (0);
}
