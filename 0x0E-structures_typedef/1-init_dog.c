#include <stdio.h>
#include "dog.h"

/**
 * init_dog- initualizes a variable struct dog
 * @d: data type
 * @name: dog name
 * @age: dog age
 * @owner: dof owner
 *
 * 
 *
 *
 * Return: nothing
 */



void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
