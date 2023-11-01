#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area
 * pointed to by s with the byte b
 * @s: area to fill
 * @b: byte to fill
 * @n: number of byte
 * Return: memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

