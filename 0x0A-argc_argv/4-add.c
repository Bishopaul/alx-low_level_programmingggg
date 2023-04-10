#include <stdio.h>
#include <stdlib.h>

/**
 * Main - adds two numbers
 * @argc: argument count
 * @argv: argument
 * Return: 0
 */

int main(int argc, char **argv)
{
	int m, n, sum = 0;
	char *v;

if (argc < 2)
{
printf("0\n");
return (0);
}


for (m = 1; argv[m]; m++)
{
n = strtol(argv[m], &v, 10);
if (*v)
{
printf("Error\n");
return (1);
}
else
{
sum += n;
}
}
printf("%d\n", sum);


return (0);
}
