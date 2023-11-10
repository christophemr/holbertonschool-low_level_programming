#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: starting value
 * @max: ending value
 * Return: newly created array
 */

int *array_range(int min, int max)
{
	int i;
	int j;
	int *tab;

	if (min > max)
		return (NULL);

	j = max - min;

	tab = malloc(sizeof(int) * (j + 1));

	if (tab == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		tab[i] = min;
		min++;
	}

	return (tab);
}
