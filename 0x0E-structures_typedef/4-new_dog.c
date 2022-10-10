#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * _string_copy- copies a string
 * @dest1: destination string
 * @dest2: source string
 * Return: poibter to new string
 */




char *_string_copy(char *dest1, char *dest2)
{
	int index;

	index = 0;
	while (dest2[index] != '\0')
	{
		dest1[index] = dest2[index];
		index++;
	}
	dest1[index] = '\0';

	return (dest1);
}


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
	int len1, len2;

	len1 = len2 = 0;
	while (name[len1] != '\0')
	{
		len1++;
	}
	len1++;
	while (owner[len2] != '\0')
	{
		len2++;
	}
	len2++;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(sizeof(char) * len1);
	if (new_dog->name == NULL)
		return (NULL);

	new_dog->owner = malloc(sizeof(char) * len2);
	if (new_dog->owner == NULL)
		return (NULL);

	new_dog->name = _string_copy(new_dog->name, name);
	new_dog->age = age;
	new_dog->owner = _string_copy(new_dog->owner, owner);

	free(new_dog);

	return (new_dog);
}
