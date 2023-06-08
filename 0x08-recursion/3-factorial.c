#include <stdio.h>

/**
 * int factorial - function that returns factorial of a num
 * @n: integer number
 * Return: Always 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return -1;
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
