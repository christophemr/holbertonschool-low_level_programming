#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: point to a newly allocated space in memory
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, s1lon, s2lon, lon;
	char *result;

	s1lon = s2lon = 0;

	if (s1 != NULL)
		for (i = 0 ; s1[i++] != '\0' ;s1lon++)

	if (s2 != NULL)
		for (i = 0 ; s2[i++] != '\0' ; s2lon++)


	lon = s1lon + s2lon;
	result = (char *)malloc(sizeof(char) * (lon + 1));
	if (result == NULL)
		return (NULL);

	for (i = 0; i < s1lon; i++)
		result[i] = s1[i];
	for (j = 0; j < s2lon; j++, i++)
		result[i] = s2[j];
	result[lon] = '\0';

	return (result);
}
