#include <stdio.h>
#include "dog.h"

/**
 * print_dog -  takes a pointer to struct dog
 * @d: holds the value of the members of struct dog
 *Return: 0 on success
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
	printf("name: %s\n", (d->name) ? d->name : "(nil)");
	printf("age: %f\n", (d->age) ? d->age : 0);
	printf("owner: %s\n", (d->owner) ? d->owner : "(nil)");
	}

}
