#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - find the lenght of a string
 * @s: string to find the lenght of
 * Return: lenght of the string
 */

int _strlen(char *s)
{
	unsigned int i;

		for (i = 0 ; s[i] != '\0'; i++)
		{
		}

		return (i);

}


/**
 * _strcpy - copy string
 * @src: source of thre string
 * @dest: destination string
 * Return: string copied
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';
	return (dest);
}


/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return:new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *snoop;
	int lon1, lon2;

	lon1 = _strlen(name);
	lon2 = _strlen(owner);

	snoop = malloc(sizeof(dog_t));
	if (snoop == NULL)
		return (NULL);
	snoop->name = malloc(sizeof(char) * (lon1 + 1));
	if (snoop->name == NULL)
	{
		free(snoop);
		return (NULL);
	}
	snoop->owner = malloc(sizeof(char) * (lon2 + 1));
	if (snoop->owner == NULL)
	{
		free(snoop->name);
		free(snoop);
		return (NULL);
	}
	_strcpy(snoop->name, name);
	_strcpy(snoop->owner, owner);
	snoop->age = age;
	return (snoop);
}
