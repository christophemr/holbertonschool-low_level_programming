#include "lists.h"

/**
 * free_dlistint - function that frees a list_t list
 * struct dlistint_s - doubly linked list
 * @head: pointer to the first node of a linked list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	dlistint_t *nxt_node;

	current = head;
	while (current != NULL)
	{
		nxt_node = current;
		current = current->next;
		free(nxt_node);
	}


}
