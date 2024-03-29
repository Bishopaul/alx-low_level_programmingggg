#include "main.h"
/**
 * wildcmp - comparing two strings
 *
 * @s1: string number one
 * @s2: string number two
 *
 * Return: 1 if they seem identical, 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == 0)
	{
		if (*s2 != 0 && *s2 == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		return (*s2 == 0);
	}

	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}

	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
