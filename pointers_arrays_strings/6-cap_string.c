#include "main.h"

/**
 *cap_string - capitalize all word of a string
 *@j: string to capitalize
 *Return: modified string
 */

char *cap_string(char *j)
{
	int i;

	for (i = 0; j[i] != '\0'; i++)
	{
		if (i==0)
		{
			if (j[i] >= 'a' && j[i] <= 'z')
			j[i] = j[i] -32;
		}
	}
	if (j[i] == ' ')
	i++;

	
		if (j[i] >= 'a' && j[i] <= 'z')
		{	
			j[i] = j[i] +32;
		}
	if (j[i] >= 'A' && j[i] <= 'Z')
	{	
		j[i] = j[i] +32;
	}
	return (j);
}
