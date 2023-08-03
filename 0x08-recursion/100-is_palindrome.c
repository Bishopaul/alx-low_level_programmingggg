#include "main.h"

/**
 * _strlen - to calculate length of string
 *
 * @s: the string
 *
 * Return: the string length
 */

int _strlen(char *s)
{
	int name = 0;
	
	if (*s)
	{
		name ++;
		name += _strlen (s + 1);
	}
	return (name);
}

/**
 * palindrome - to check if  a string is palindrome or not
 *
 * @s: to string test
 * @m: counter
 * @len: length of string
 *
 * Return: 1 if palindrome, 0 otherwise
 */

int palindrome(char *s, int m, int len)
{
	if (s[m] != s[len - 1])
		return (0);

	else if (m >= len)
		return (1);

	else
		return (palindrome(s, m + 1, len - 1));
}

/**
 * is_palindrome - to return a value if palindrome
 *
 * @s: the string
 *
 * Return: 1 if palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (palindrome(s, 0, _strlen(s)));
}
