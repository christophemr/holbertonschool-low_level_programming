#include "lists.h"

/**
 * print_list -  prints all the elements of a list_t list
 * struct list_s - singly linked list
 * @h: pointer to the head of the linked list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%u] %s\n", h->len, h->str);

		else
		{
			printf("[0] (nil)\n");
		}

		h = h->next;
		node_count++;
	}
	return (node_count);

}
