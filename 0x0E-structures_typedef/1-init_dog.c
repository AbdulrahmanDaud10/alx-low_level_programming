#include "dog.h"
#include <stdio.h>
/**
 * init_dog - structure dog
 * @d: pointer to type struct dog
 * @name: struct dog's member 1, name (char *)
 * @age: struct dog's member 2, age (float)
 * @owner: struct dog's member 3, owner (char *)
 * Return: Nothing
 */

void init_dog(struct *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
