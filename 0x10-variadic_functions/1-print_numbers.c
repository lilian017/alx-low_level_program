#include "stdarg.h"
#include <stdio.h>

/**
 * print_numbers - a function that prints numbers
 *@separator: printed string between numbers
 *@n: number of integers into the func
 *Return: NULL
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);

}
