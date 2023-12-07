#include "hash_tables.h"
/**
 * key_index -  gives the index of a key
 * @key: value used to get the index
 * @size: size of the array of the hash table
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int keyidx;

	if (key == NULL || size == 0)
		return (0);
	keyidx = hash_djb2(key) % size;

	return (keyidx);
}
