#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all- sums all parameters
 * @n: parameters
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return (0);
	}
	unsigned int i;
	int sum = 0;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int ag = va_arg(args, int);

		sum += ag;
	}
	va_end(args);
	return (sum);
}
