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
void simple_print_buffer(int *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int *a;

    a = array_range(0, 10);
    simple_print_buffer(a, 11);
    free(a);
    return (0);
}