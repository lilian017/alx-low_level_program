#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - function that prints a name
 * @name: character name
 * @f: pointer to function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
