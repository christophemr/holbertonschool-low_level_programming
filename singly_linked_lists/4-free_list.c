#include "lists.h"

/**
 * free_list -  function that frees a list_t list
 * struct list_t - singly linked list
 * @head: pointer to the first node of the linked list
 */

void free_list(list_t *head)
{
	list_t *current;
	list_t *nxt_node;

	current = head;
	while (current != NULL)
	{
		nxt_node = current;
		current = current->next;
		free(nxt_node->str);
		free(nxt_node);
	}
}
