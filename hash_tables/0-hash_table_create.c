#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table
 * @size: size of the array
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashTable;

	hashTable = malloc(sizeof(hash_table_t));
	if (hashTable == NULL)
		return (NULL);

	hashTable->size = size;
	hashTable->array = malloc(sizeof(size));
	if (hashTable->array == NULL)
		return (NULL);

	return (hashTable);
}
