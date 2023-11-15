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
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		printf("Age: %f\n", (d->age) ? d->age : 0);
		printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
	}

}
