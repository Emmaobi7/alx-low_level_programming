#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog- frees malloc to dog
 * @d: pointer to struct to free
 * Return: nothing
 */






void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
	}
	free(d);
}
