#include "lists.h"

/**
 * get_dnodeint_at_index -  returns the nth node of a dlistint_t linked list
 * @head: head of the linked list
 * @index: position of the node to return
 * Return: node a the Nth position or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int pos = 0;

	while (head)
	{
		if (pos == index)
			return (head);
		head = head->next;
		pos++;
	}
	return (NULL);


}
