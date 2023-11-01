#include "main.h"

/**
 * _strspn -  gets the length of a prefix substring
 * @s: string to check
 * @accept: bytes to check
 * Return: result
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, k;
	int num = 0;
	unsigned int result;
	char del[] = {',', ';', ' ', '\n', '\0'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (s[i] == del[j])
			{
				result = num;
				return (result);
			}
		}
	}
	for (k = 0; accept[k] != '\0'; k++)
	{
		if (accept[k] == s[i])
		num++;

	}
	result = num;
	return (result);
}

