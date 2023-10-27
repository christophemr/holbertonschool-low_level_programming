#include "main.h"

/**
 * string_toupper - function that converts lowercase into uppercase
 *@j: address of the string to convert
 *Return: modified result
 */

char *string_toupper(char *j)
{
	int i;

	for (i = 0; j[i] != '\0'; i++)
	{
		if (j[i] >= 'j' && j[i] <= 'z')
			j[i] -= 32;
	}
	return (j);

}
