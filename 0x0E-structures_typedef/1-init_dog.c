#include "dog.h"

/**
 * init_dog - function that initializes struct dog
 * @struct dog: variable
 * @d: deferencing pointer d
 * @name: name of dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: void
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
