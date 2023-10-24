#include "main.h"

/**
 * _strcpy - copies the string pointed by src to the buffer
 * @src: source of the copy
 * @dest: destination of the copy
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
