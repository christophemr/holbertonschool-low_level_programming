#include "main.h"
#include <stdio.h>

/**
 *_strcat - concatenate 2 strings
 *@dest: string to concatenate
 *@src: string to concatenate
 *Return: result
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[i] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);

}
