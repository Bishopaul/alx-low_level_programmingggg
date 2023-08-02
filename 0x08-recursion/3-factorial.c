#include "main.h"

/**
 * factorial - to determine the factorial of any positive integer
 *
 * @n: the integer
 *
 * Return: -1 if n is less than 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
