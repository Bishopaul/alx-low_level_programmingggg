#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the multiplication of two numbers
 *
 * @argc: Argument count
 * @argv: Argument
 *
 * Return: 1 if arguments are not two, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int a, b, c;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = a * b;

	printf("%d\n", c);
	return (0);
}
