#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 *
 * @s: the string to be calculated
 *
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	int name = 0;

	if (*s)
	{
		name++;
		name += _strlen_recursion(s + 1);
	}
	return (name);
}
