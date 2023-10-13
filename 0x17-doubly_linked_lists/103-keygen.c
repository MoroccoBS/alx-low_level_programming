#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * find_largest - finds the largest character in the username
 * @user: username
 * @len: length of username
 * Return: the largest character
 */
int find_largest(char *user, int len)
{
	int largest;
	int index;
	unsigned int rand_num;

	largest = *user;
	index = 0;

	while (index < len)
	{
		if (largest < user[index])
			largest = user[index];
		index += 1;
	}

	srand(largest ^ 14);
	rand_num = rand();

	return (rand_num & 63);
}

/**
 * multiply_chars - multiplies each character of the username
 * @user: username
 * @len: length of username
 * Return: multiplied character
 */
int multiply_chars(char *user, int len)
{
	int result;
	int index;

	result = index = 0;

	while (index < len)
	{
		result = result + user[index] * user[index];
		index += 1;
	}

	return (((unsigned int)result ^ 239) & 63);
}

/**
 * generate_random_char - generates a random character
 * @user: username
 * Return: a random character
 */
int generate_random_char(char *user)
{
	int random_char;
	int index;

	random_char = index = 0;

	while (index < *user)
	{
		random_char = rand();
		index += 1;
	}

	return (((unsigned int)random_char ^ 229) & 63);
}

/**
 * main - Entry point
 * @argc: arguments count
 * @argv: arguments vector
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	char keygen[7];
	int input_length, character, sum_of_characters;
	long alpha[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850};
	(void)argc;

	for (input_length = 0; argv[1][input_length]; input_length++)
		;

	keygen[0] = ((char *)alpha)[(input_length ^ 59) & 63];

	character = sum_of_characters = 0;
	while (character < input_length)
	{
		sum_of_characters = sum_of_characters + argv[1][character];
		character = character + 1;
	}

	keygen[1] = ((char *)alpha)[(sum_of_characters ^ 79) & 63];

	character = 1;
	sum_of_characters = 0;
	while (sum_of_characters < input_length)
	{
		character = argv[1][sum_of_characters] * character;
		sum_of_characters = sum_of_characters + 1;
	}

	keygen[2] = ((char *)alpha)[(character ^ 85) & 63];
	keygen[3] = ((char *)alpha)[find_largest(argv[1], input_length)];
	keygen[4] = ((char *)alpha)[multiply_chars(argv[1], input_length)];
	keygen[5] = ((char *)alpha)[generate_random_char(argv[1])];
	keygen[6] = '\0';

	for (character = 0; keygen[character]; character++)
		printf("%c", keygen[character]);

	return (0);
}
