#include <stdio.h>

/**
 *_print_rev_recursion- function that prints a string in reverse recursively
 * @s: string
 * Return: Always 0
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	putchar(*s);
	_print_rev_recursion(s + 1);
}
