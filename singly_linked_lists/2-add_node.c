#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * struct list_t - singly linked list
 * @head: pointer to the first node of the linked list
 * @str: pointer to the string to duplicates
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int i;
	unsigned int count = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	new_node->len = count;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}

