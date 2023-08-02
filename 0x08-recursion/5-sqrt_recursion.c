#include "main.h"

/**
 * square - function to return the square of a number
 *
 * @n: the square
 * @m: the input
 *
 * Return: -1 if it is not a natural square
 */

int square(int n, int m)
{
	if (m * m > n)
		return (-1);

	if (m * m == n)
		return (m);

	else
		return (square(n, m + 1));
}

/**
 * _sqrt_recursion - function that returns the natural square root
 *
 * @n: the number to be returned
 *
 * Return: 0 if it is zero
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (0);

	if (n == 1)
		return (1);

	else
		return (square(n, 2));
}
