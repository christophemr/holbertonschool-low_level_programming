#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 * @width: number of colomns
 * @height: number of rows
 * Return: pointer to allocated memory
 */

int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **result;

	if (width <= 0 || height <= 0)
		return (NULL);

	result = malloc(sizeof(int *) * height);

	if (result == NULL)
		return (NULL);

	for (i = 0 ; i < height ; i++)
	{
		result[i] = malloc(sizeof(int) * width);

		if (result[i] == NULL)
		{
			free(result);

			for (j = 0 ; j < width ; j++)
				free(result[j]);
			return (NULL);
		}

		for (j = 0 ; j < width ; j++)
			result[i][j] = 0;
	}

	return (result);
}
