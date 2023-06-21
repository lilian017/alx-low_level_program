#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add- function that sums a and b
 *@a: numb 1
 *@b: numb 2
 * return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that subtracts
 *@a: numb 1
 *@b: numb 2
 * return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - function that multiplies
 *@a: numb 1
 *@b: numb 2
 *return:product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - function that divides
 *@a: numb 1
 *@b: numb 2
 *return: division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - function that returns remainder
 *@a: numb 1
 *@b: numb 2
 * return: remainder
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}


