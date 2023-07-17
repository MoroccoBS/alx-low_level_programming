#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - prints a struct dog
 * @d: pointer to struct dog
 * Return: void
 */
void print_dog(struct dog *d)
{
    if (d == NULL)
        return;
    if (d->name == NULL)
        printf("Name: (nil)\n");
    else
        printf("Name: %s\n", d->name);
    if (d->age == 0)
        printf("Age: (nil)");
    else
        printf("Age: %s\n, d->age");
    if (d->owner == NULL)
        printf("Owner: (nil)");
    else
        printf("Owner: %s\n, d->owner");
}