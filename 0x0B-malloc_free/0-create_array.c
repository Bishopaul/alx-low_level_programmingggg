#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars
 *
 * @size: size of array
 * @c: character in array
 *
 * Return: a pointer to the array, NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
	{
		if (arr == NULL)
			return (NULL);

		arr[i] = c;
	}

	return (arr);
}
