#include "main.h"

/*
 * string_nconcat - concatenates two strings
 * @s1: string to concatenates
 * @s2: string to concatenates
 * Return: concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	char * result;

	if (s1 == 0)
		s1 = "";

	if (s2 == 0)
		s2 = "";

	k = strlen(s1) + n;

	result = malloc((k + 1) * sizeof(char));

	if (result == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0' ; i++)
		result[i] = s1[i];

	for (j = 0; j < n && s2[j] != '\0'; i++, j++)
		result[i] = s2[j];

	result[i] = '\0';

	return (result);
}
