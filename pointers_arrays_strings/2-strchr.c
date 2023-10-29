#include "main.h"

/**
 * _strchr -  locates a character in a string
 * @s: string to check
 * @c char to search for
 * Return: pointer to the 1st occurrence of the character or null if not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}

	if (s[i] == c)
	return (&s[i]);

	return (NULL);
}

