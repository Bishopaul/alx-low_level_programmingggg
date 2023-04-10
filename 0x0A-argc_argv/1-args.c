#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints number of arguments
 * @argc: Argument count
 * @argv: Argument
 * Return: 0
 */

int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
