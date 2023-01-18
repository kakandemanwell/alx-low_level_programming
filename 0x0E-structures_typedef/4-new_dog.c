#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: pointer to name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to new dog, NULL otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		return (NULL);
	}

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	_strcpy(dog->name, name);

	dog->age = age;
	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));

	if (dog->owner == NULL)
	{
		free(dog);
		return (NULL);
	}
	_strcpy(dog->owner, owner);
	return (dog);

}
