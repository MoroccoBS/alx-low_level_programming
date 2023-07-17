#include "dog.h"
/**
 * init_dog - Entry point
 * @name: name
 * @age: age
 * @owner: owner
 * Return: Always 0 (Success)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if(d = NULL)
		d = malloc(sizeof(struct dog));
    d->name = name;
    d->age = age;
    d->owner = owner;
}
