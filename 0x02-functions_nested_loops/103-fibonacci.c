#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Fibonacci numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
        int i, j, k;
        int n = 50;
        int a = 0;
        int b = 1;
        int c = 0;
        for (i = 0; i < n; i++)
        {
                printf("%d, ", a);
                c = a + b;
                a = b;
                b = c;
        }

}