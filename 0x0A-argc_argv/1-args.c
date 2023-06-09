#include <stdio.h>

/**
 *main- program that prints argmnts passed to it.
 *@argc: argmnt count
 *@argv: argmnts
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
