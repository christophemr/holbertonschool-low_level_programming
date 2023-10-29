#include "main.h"

/**
 * leet - encodes caracter from a string to numbers 1337
 * @s: string to encode
 * Return: encoded string
 */

char *leet(char *s)
{
	int i, j;

	char change[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char replace[] =  {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (s[i] == change[j])
			{
				s[i] = replace[j];
				break;
			}
		}
	}
	return (s);

}
