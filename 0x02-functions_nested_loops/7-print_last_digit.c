#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - function to print last digit of a number
 * @n: number to be checked
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
	last_digit = (n % 10) * -1;
	}
	else
	{
	last_digit = n % 10;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
