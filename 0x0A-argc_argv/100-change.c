#include <stdlib.h>
#include <stdio.h>

/**
 * main- prints min no. coins for change
 * @argc: argumnt count
 * @argv: argmnt
 * Return: 0
 */
int main (int argc, char **argv)
{
	int tot, count;
	unsigned int i;
	char *p;
	int cent[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	tot = strtol(argv[1], &p, 10);
	count = 0;

	if  (!*p)
	{
		while (tot > 1)
		{
			for (i = 0; i < sizeof(cent[i]); i++)
			{
				if (tot >= cent[i])
				{
					count +=tot / cent[i];
					tot = tot % cent [i];
				}
			}
		}
		if (tot == 1)
			count++;
	}
	else
	{
		printf("%d\n",count);
		return (0);
	}
}
