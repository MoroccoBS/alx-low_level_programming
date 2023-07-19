#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: number of command-line arguments
 * @argv: array of strings
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Error\n");
        return 1;
    }

    int num_bytes = atoi(argv[1]);
    if (num_bytes < 0)
    {
        printf("Error\n");
        return 2;
    }

    unsigned char *main_ptr = (unsigned char *)main;
    for (int i = 0; i < num_bytes; i++)
    {
        printf("%02x ", main_ptr[i]);
    }
    printf("\n");

    return 0;
}