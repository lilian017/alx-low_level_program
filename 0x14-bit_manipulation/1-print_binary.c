#include "main.h"
#include <stdio.h>

/**
 * power - calculates (base and power)
 * @base: base of the exponent
 * @pow: powet of the exponenet
 * Returns: value of base power
 */

unsigned long int _power(unsigned int base, unsigned int pow)
{
	unsigned long int res;
	unsigned int i;

	res = 1;
	for (i = 1; i <= pow; i++)
		res *= base;
	return (res);
}
/**
 * print_binary - function that prints binary representative
 * @n: the number printed
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int j, num;
	char flag;

	flag = 0;
	j = _power(2, sizeof(unsigned long int) * 8 -1);

	while (j != 0)
	{
		num = n & j;
		if (num == j)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || j == 1)
		{
			_putchar('0');
		}
		j >>= 1;
	}
}
