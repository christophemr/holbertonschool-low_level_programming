#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - deallocates memory
 *@d: dog to set free
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
