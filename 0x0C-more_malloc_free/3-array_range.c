#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to the array
 */
int *array_range(int min, int max)
{
    int *array;
    unsigned int i;

    if (min > max)
    {
        return (NULL);
    }
    array = malloc((max - min + 1) * sizeof(int));
    if (array == NULL)
    {
        return (NULL);
    }
    for (i = min; i <= max; i++)
    {
        array[i - min] = i;
    }
    return (array);
}