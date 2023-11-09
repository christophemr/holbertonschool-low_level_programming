#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements 
 * @size: size of said elements
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

	unsigned int i;
	char *tab;
	if (nmemb == 0 || size == 0)
		return (0);
	tab = malloc(nmemb * size);

	if (tab == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		tab[i] = 0;

	return (tab);
}
