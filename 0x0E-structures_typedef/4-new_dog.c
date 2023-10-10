#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	n_dog = (dog_t *)malloc(sizeof(dog_t));
	if (n_dog == NULL)
		return (NULL);

	n_dog->name = (char *)malloc(strlen(name) + 1);
	n_dog->owner = (char *)malloc(strlen(owner) + 1);

	if (n_dog->name == NULL || n_dog->owner == NULL)
	{
		free(n_dog->name);
		free(n_dog->owner);
		free(n_dog);
		return (NULL);
	}

	strcpy(n_dog->name, name);
	strcpy(n_dog->owner, owner);
	n_dog->age = age;

	return (n_dog);
}
