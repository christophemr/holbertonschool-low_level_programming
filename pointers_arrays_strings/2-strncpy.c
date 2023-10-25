#include "main.h"

/**
 *_strncpy - function that copies a string
 *@dest: destinationof the copy
 *@src: string to copy
 *@n: number of characters to copy
 *Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; src[i] != '\0' && n > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}

	j = i;

	if (src[i] == '\0' && n > 0)
	{
		for (; n > 0; j++)
		{
			dest[j] = 0x00;
			n--;
		}
	}

	return (dest);

}
