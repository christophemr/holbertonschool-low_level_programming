#include "main.h"

/**
 * create_array -  creates an array of chars
 * @size: size of the array
 * @c: characters to store in the array
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *tab;

	if (size == 0)
		return (NULL);
	tab = malloc(sizeof(char) * size);
	if (tab == NULL)
		return (NULL);
	for (i = 0 ; i < size ; i++)
		tab[i] = c;
	return (tab);

}
