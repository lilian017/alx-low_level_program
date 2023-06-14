#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that multiplies two integers
 * @argc: count of argument
 * @argv: components of the argument
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i, j;

	if (argc != 3)
	{
		printf("ERROR\n");
		return (1);
	}
	else
	{
		i = atoi argv[1];
		j = atoi argv[2];
		printf("Multiplication: %d\n", i * j);
		return (0);

	}
}
