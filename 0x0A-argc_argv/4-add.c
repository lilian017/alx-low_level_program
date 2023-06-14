 #include <stdio.h>
#include <stdlib.h>

/**main - function that adds numbers in the result
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int i, sum;
	sum = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; argv[i]; i++)
	{
		if (argv[i] == NULL)
		{
		printf("ERROR\n");
		return (1);
		}
		else
		{
			sum += atoi(argv[i]);
		}
	}
	printf("sum: %d\n", sum);
	
	return (0);
}
