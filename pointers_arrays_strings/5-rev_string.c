#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - function that reverse the string
 * @s: string to reverse
 * Return: 0 on success
 */

void rev_string(char *s)
{
	char temp;
	int i, j, k;

	j = 0;
	k = 0;

	while (s[j] != '\0')
	{
		j++;
	}

	k = j - 1;

	for (i = 0; i < j / 2; i++)
	{
		temp = s[i];
		s[i] = s[k];
		s[k--] = temp;
	}
}
