#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - function that creates a new dog
 * @name: name of the dog
 * @age: the dog's age
 * @owner: the dog's owner's name
 *
 * Return: returns a struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j, k;
	dog_t *n_dog; /*creates an instance of dog_t*/

	n_dog = malloc(sizeof(dog_t)); /*allocate memory for n_dog*/
	if (n_dog == NULL) /*verify that malloc did not fail*/
	{
		free(n_dog);
		return (NULL);
	}
	/* calc length of string member, *name */
	i = 0;
	while (name[i] != '\0')
		i++;

	/* calc the length of string member, *owner */
	j = 0;
	while (owner[j] != '\0')
		j++;

	/* allocate memory for *name */
	n_dog->name = malloc(sizeof(n_dog->name) * i);

	/* verify that malloc did not fail */
	if (n_dog->name == NULL)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}

	/* Assign name */
	for (k = 0; k <= i; k++)
		n_dog->name[k] = name[k];

	/* Assign age */
	n_dog->age = age;

	/* allocate memory for *owner */
	n_dog->owner = malloc(sizeof(n_dog->owner) * j);

	/* verify that malloc did not fail */
	if (n_dog->owner == NULL)
	{
		free(n_dog->owner);
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}

	/* Assign owner */
	for (k = 0; k <= j; k++)
		n_dog->owner[k] = owner[k];

	return (n_dog);
}
