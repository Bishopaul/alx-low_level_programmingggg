#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: NULL on failure, otherwise pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *array;
	int i, index = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	array = malloc(sizeof(char) * len);

	if (array == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		array[index] = s1[index];

	for (i = 0; s2[i]; i++)
		array[index] = s2[index];

	return (array);
}
