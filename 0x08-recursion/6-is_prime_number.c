#include "main.h"

/**
 * prime - checks if a number is prime
 *
 * @n: likely prime number
 * @m: counter
 *
 * Return: 1 if prime, 0 otherwise
 */

int prime(int n, int m)
{
	if (n % m == 0)
	{
		if (n != m)
			return (0);
		return (1);
	}
	return (prime(n, m + 1));
}

/**
 * is_prime_number - function that checks and returns 1 for prime numbers
 *
 * @n: the test number
 *
 * Return: 1 if prime, 0 if otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, 2));
}
