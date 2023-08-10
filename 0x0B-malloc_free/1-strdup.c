#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a new allocated space in memory
 *
 * @str: character
 *
 * Return: NULL if str is NULL, else return pointer
 */

char *_strdup(char *str)
{
	int i, len = 0;
	char *ar;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	ar = malloc(sizeof(char) * (len + 1));

	if (ar == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		ar[i] = str[i];
	}
	return (ar);
}
