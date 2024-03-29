#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints struct dog
 * @d: deferencing pointer
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name:%s\n", d->name);
		else
			printf("Name:(nil)");
		printf("Age:%6f\n", d->age);
		if (d->owner != NULL)
			printf("Owner:%s\n", d->owner);
		else
			printf("Owner:(nil)");
	}
}
