#include "main.h"
#include <stdio.h>
/**
 * _abs - function to compute absolute value of an integer
 * @n: integer to be checked
 * Return: absolute value of n
 */
int _abs(int n)
{
        if (n < 0)
        {
                return (-n);
        }
        else
        {
                return (n);
        }
}