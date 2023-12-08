#include "hash_tables.h"
/**
 * hash_table_get -  retrieves a value associated with a key
 * @ht: hash table you want to look into
 * @key:  unique identifier for the value we're looking for
 * Return: value associated with the element,
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long idx;
	hash_node_t *current;

	if (ht == NULL || key == NULL)
		return (NULL);

	idx = hash_djb2((const unsigned char *)key) % ht->size;

	current = ht->array[idx];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			return (current->value);
		}
	current = current->next;
	}
	return (NULL);

}
