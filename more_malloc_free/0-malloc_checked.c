#include "main.h"

/**
 * malloc_checked - allocates memory usin malloc
 * @b: size of the memory
 * Return: pointer to the new memory allocated
 */

void *malloc_checked(unsigned int b)
{
	void *result;

	result = malloc(sizeof(char) * b);

	if (result == NULL)
		exit(98);

	return (result);

}
