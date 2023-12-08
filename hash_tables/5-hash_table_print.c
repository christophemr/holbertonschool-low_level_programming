#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	size_t i;
	hash_node_t *current;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			printf("'%s': '%s'", current->key, current->value);
			current = current->next;
			if (current != NULL || i < ht->size - 1)
			{
				printf(", ");
			}
		}
	}

	printf("}\n");

}

