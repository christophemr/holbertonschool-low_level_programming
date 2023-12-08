#include "hash_tables.h"
/**
 * hash_table_set -  adds an element to the hash table
 * @ht: hash table you want to add or update the key/value to
 * @key: serves as a unique identifier for the data
 * @value: data associated with the key
 * Return: 1 on succes otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *current, *new_node;
	unsigned long idx;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	idx = hash_djb2((const unsigned char *)key) % ht->size;

	current = ht->array[idx];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
					return (1);
		}
		current = current->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;

	return (1);
}

