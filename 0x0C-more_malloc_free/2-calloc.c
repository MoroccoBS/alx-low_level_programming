#include "main.h"
/**
 * _calloc - function that allocates memory for an array
 * @nmemb: number of elements
 * @size: size
 * Return: pointer to the resulting string
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    int *ptr;
    int i;
    int j;

    if (nmemb == 0)
    {
        return (NULL);
    }
    if (size == 0)
    {
        return (NULL);
    }
    ptr = malloc(size * nmemb);
    if (ptr == NULL)
    {
        return (NULL);
    }
    return (ptr);
}
void simple_print_buffer(char *buffer, unsigned int size)
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
    char *a;

    a = _calloc(98, sizeof(char));
    strcpy(a, "Best");
    strcpy(a + 4, " School! :)\n");
    a[97] = '!';
    simple_print_buffer(a, 98);
    free(a);
    return (0);
}