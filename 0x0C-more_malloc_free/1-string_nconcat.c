#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i;
	unsigned int j;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	 for (i = 0; s1[i] != '\0'; i++)
	 {
		 len1++;
	 }
	 for (j = 0; s2[j] != '\0'; j++)
	 {
		 len2++;
	 }
	 if (n > len2)
	 {
		 n = len2;
	 }
	 ptr = malloc(len1 + n + 1);
	 if (ptr == NULL)
	 {
		 return (NULL);
	 }
	 for (i = 0; i < len1; i++)
	 {
		 ptr[i] = s1[i];
	 }
	 for (j = 0; j < n; j++)
		 ptr[i++] = s2[j];
	 ptr[i] = '\0';
	 return (ptr);
}
