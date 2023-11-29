#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the beginning
 * of a linked list
 * @n: integer
 * @head: pointer to the first node of the linked list
 * Return:  the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}