#include "main.h"

/**
 * main - function that prints a string in reverse
 *
 * @s: string to reverse
 *
 * Return: 0
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
