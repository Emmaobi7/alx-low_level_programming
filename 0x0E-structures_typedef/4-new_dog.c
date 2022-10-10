#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * new_dog- creates a new dog struct
 * @name: dog name
 * @age: dog age
 * @owner: dogs owner
 *
 * Return: copy of new dog
 */



dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t *));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	free(new_dog);

	return (new_dog);
}
