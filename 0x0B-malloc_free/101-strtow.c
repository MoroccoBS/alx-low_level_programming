#include "main.h"
/**
 * strtow - splits a string into words
 * @str: string to be split
 * Return: pointer to the newly allocated space in memory
 */
char *strtow(char *str)
{
    char *ptr;
    int i = 0;
    int j = 0;
    int sum = 0;

    if (str == NULL)
        return (NULL);
    while (str[i] != '\0')
    {
        if (str[i] == ' ')
            sum++;
        i++;
    }
    ptr = malloc(sizeof(char) * (sum + 1));
    if (ptr == NULL)
        return (NULL);
    for (i = 0; i < sum; i++)
    {
        for (j = 0; str[i + j] != '\0'; j++)
        {
            ptr[i] = str[i + j];
            sum++;
        }
        ptr[i] = '\0';
        i++;
    }
    return (ptr);
}