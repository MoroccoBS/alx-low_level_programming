#include "main.h"
/**
 * argstostr - concatenates all the arguments
 * @ac: number of arguments
 * @av: array of arguments
 * Return: a pointer to the resulting string
 */
char *argstostr(int ac, char **av)
{
    int i, j, k;
    char *str;
    int sum = 0;
    if (ac == 0)
    {
        return (NULL);
    }
    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j] != '\0'; j++)
        {
            sum += av[i][j];
        }
        if (sum == 0)
        {
            return (NULL);
        }
        sum = 0;
    }
    str = malloc(sizeof(char) * (sum + 1));
    if (str == NULL)
    {
        return (NULL);
    }
    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j] != '\0'; j++)
        {
            str[k] = av[i][j];
            k++;
        }
        str[k] = '\n';
        k++;
    }
    str[k] = '\0';
    return (str);
}
int main(int ac, char *av[])
{
    char *s;

    s = argstostr(ac, av);
    if (s == NULL)
    {
        return (1);
    }
    printf("%s", s);
    free(s);
    return (0);
}