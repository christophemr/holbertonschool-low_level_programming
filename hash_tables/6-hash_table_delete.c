#include "hash_tables.h"
/**
 * hash_table_delete - function that delete a hash table
 * @ht: hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
        size_t i;
        hash_node_t *current;
        hash_node_t *tmp;

        if (ht == NULL)
                return;

        for (i = 0; i < ht->size; i++)
        {
                current = ht->array[i];
                while (current != NULL)
                {
                        tmp = current;
                        current = current->next;
                        free(tmp->key);
                        free(tmp->value);
                        free(tmp);
                }
        }

        free(ht->array);
        free(ht);

}

