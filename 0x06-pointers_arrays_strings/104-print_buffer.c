#include "main.h"
/**
 * print_buffer - a function that prints a buffer.
 * @b: buffer pointer
 * @size: buffer size
 * Return: void
 */
void print_buffer(char *b, int size)
{
    if (size <= 0)
    {
        printf("\n");
        return;
    }

    for (int i = 0; i < size; i += 10)
    {
        printf("%08x ", i);

        for (int j = i; j < i + 10; j += 2)
        {
            if (j < size)
            {
                printf("%02x", b[j] & 0xFF);

                if (j + 1 < size)
                {
                    printf("%02x", b[j + 1] & 0xFF);
                }
                else
                {
                    printf("  ");
                }

                printf(" ");
            }
            else
            {
                printf("      ");
            }
        }

        printf(" ");

        for (int j = i; j < i + 10 && j < size; j++)
        {
            if (b[j] >= 32 && b[j] <= 126)
            {
                printf("%c", b[j]);
            }
            else
            {
                printf(".");
            }
        }

        printf("\n");
    }
}
