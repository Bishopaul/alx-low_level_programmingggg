#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 *
 * @s1: string one
 * @s2: string two
 * @n: integer
 *
 * Return: NULL if function fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int m, p, o;
	char *pointer;

	if (s1 == NULL)
		m = 0;

	else
	{
		for (m = 0; s1[m] != '\0'; m++)
			;
	}

	if (s2 == NULL)
		p = 0;

	else
	{
		for (p = 0; s2[p] != '\0'; p++)
			;
	}

	if (p > n)
		p = n;

	pointer = malloc(sizeof(char) * (m + p + 1));

	if (pointer == NULL)
		return (NULL);

	for (o = 0; o < m; o++)
		pointer[o] = s1[o];

	for (o = 0; o < p; o++)
		pointer[o + 1] = s2[o];

	pointer[m + p] = '\0';

	return (pointer);
}



