#include <stdio.h>
#include <stdlib.h>

/**
 * Main - multiplies two numbers
 * @argc: argument count
 * @argv: argument
 * Return: 0
 */

int main(int argc, char **argv)
{
	int m, n;
	int v;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	m = atoi(argv[1]);
	n = atoi(argv[2]);
	v = m * n;
	printf("%d\n", v);

	return (0);
}
