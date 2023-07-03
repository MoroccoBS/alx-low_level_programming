#include "main.h"
/**
 * _strchr - a function that locates a character in a string
 * @s: String
 * @c: char to be locates
 */
char *_strchr(char *s, char c)
{
    int len = 0;
    int i, n;
    char *j = NULL;

    while (s[len] != '\0')
    {
        len++;
    }
    for (i = 0; i < len; i++)
    {
        if (s[i] == c)
        {
            n = i;
            j = &s[n];
            break;
        }
    }
    if (j != NULL)
    {
        if (len - n >= 3)
        {
            return (j);
        }
        else
        {
            return (NULL);
        }
    }
    return (NULL);
}
