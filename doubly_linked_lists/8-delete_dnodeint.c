#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index position
 * @head: pointer to the first node
 * @index: index at wich to delete the node
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{

	unsigned int i = 0;
	dlistint_t *current = *head;
	dlistint_t *prevNode = NULL;
	dlistint_t *nextNode = NULL;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}
	if (index != i || current == NULL)
	{
		return (-1);
	}
	prevNode = current->prev;
	nextNode = current->next;
	if (prevNode != NULL)
	{
		prevNode->next = nextNode;
	}
	else
	{
		*head = nextNode;
	}
	if (nextNode != NULL)
	{
		nextNode->prev = prevNode;
	}
	free(current);
	return (1);
}

