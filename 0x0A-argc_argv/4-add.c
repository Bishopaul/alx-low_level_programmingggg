#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that adds positive numbers
 *
 * @argc: Argument count
 * @argv: Argument
 *
 * Return: 1 if Error, 0 for success
 */

int main(int argc, char *argv[])
{
	int a, b, sum = 0;
	char *c;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (a = 1; argv[a]; a++)
	{
		b = strtol(argv[a], &c, 10);

		if (*c)
		{
			printf("Error\n");
			return (1);
		}

		else
		{
			sum += b;
		}
	}
	printf("%d\n", sum);
	return (0);
}
