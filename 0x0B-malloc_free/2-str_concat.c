#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to the newly allocated space in memory
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, j;
	int s1_len = 0, s2_len = 0;
	int size = 0;

	if (s1 == NULL)
	{
		return (NULL);
	}
	if (s2 == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (s1[i] != '\0')
	{
		s1_len++;
	}
	j = 0;
	while (s2[i] != '\0')
	{
		s2_len++;
	}
	ptr = malloc(sizeof(char) * (s1_len + s2_len + 1));
	for (i = 0; i <= s1_len; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j <= s2_len; j++)
	{
		ptr[i + j] = s2[j];
	}
	ptr[i + j] = '\0';
	return (ptr);
}
