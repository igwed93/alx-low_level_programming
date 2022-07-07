#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function that initializes a variable
 * of type struct dog
 * @d: pointer to variable of type struct dog
 * @name: member 1 of struct dog
 * @age: member 2 of struct dog
 * @owner: member 3 of struct dog
 *
 * Return: nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
