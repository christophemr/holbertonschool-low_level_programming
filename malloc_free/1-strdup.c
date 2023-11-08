#include "main.h"

/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * @str: pointer to the new memory space
 * Return: pointer to the duplicated string
 */

char *_strdup(char *str)
{
	int i;
	char *cpy;
	int num = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0 ; str[i] != '\0'; i++)
		num++;
	cpy = malloc(sizeof(char) * num + 1);

	if (cpy == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		cpy[i] = str[i];

	return (cpy);


}
