#include "main.h"
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: point to a newly allocated space in memory
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int len_s1;
	unsigned int len_s2;
	unsigned int i;
	char *result;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);


	result = malloc(sizeof(char) * (len_s1 + len_s2) + 1);

	if (result == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
		result[i]  = s1[i];

	for (i = 0; i < len_s2; i++)
		result[len_s1 + i] = s2[i];

	result[len_s1 + len_s2] = '\0';

	return (result);
}
