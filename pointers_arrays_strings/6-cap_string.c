#include "main.h"

/**
 *cap_string - capitalizes all word of a string
 *@s: string to capitalize
 *Return: modified string
 */

char *cap_string(char *s)
{
	int i = 0, j;
	char del[] = {',', ';', '.', '!', '?',
		'"', '(', ')', '{', '}', ' ', '\n', '\t'};

	while (s[i] != '\0')
	{
		if (i == 0 && (s[i] >= 'a' && s[i] <= 'z'))
			s[i] -= 32;

		for (j = 0; j < 13; j++)
		{
			if (s[i] == del[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i + 1] -= 32;
			}
		}
	i++;
	}
	return (s);
}
