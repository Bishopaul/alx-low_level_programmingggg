#include "main.h"

/**
 * print_times_table - function to print the 9 times table, starting with 0
 * @n: number to be checked
 * Return: void
 */
void times_table(void)
{
        int i, j, k;

        for (i = 0; i < 10; i++)
        {
                for (j = 0; j < 10; j++)
                {
                        k = i * j;
                        if (k < 10)
                        {
                                if (j != 0)
                                {
                                        _putchar(' ');
                                        _putchar(' ');
                                }
                                _putchar(k + '0');
                        }
                        else if (k < 100)
                        {
                                _putchar(' ');
                                _putchar(k / 10 + '0');
                                _putchar(k % 10 + '0');
                        }
                        else
                        {
                                _putchar(k / 100 + '0');
                                _putchar((k / 10) % 10 + '0');
                                _putchar(k % 10 + '0');
                        }
                        if (j != 9)
                        {
                                _putchar(',');
                        }
                }
                _putchar('\n');
        }
}