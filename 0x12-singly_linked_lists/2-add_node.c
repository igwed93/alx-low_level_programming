#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning
 * of a list_t list.
 * @head: pointer to pointer of the head of the linked list
 * @str: value of the new node
 *
 * Return: the address of the new element (node) or NULL
 * if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	/* allocate node */
	list_t *new_node = malloc(sizeof(list_t));

	/* verify that malloc did not fail */
	if (new_node == NULL)
	{
		return (NULL);
	}

	/* append the data or member of the node*/
	new_node->str = strdup(str);
	new_node->len = strlen(str);

	/* Make next of new node as head */
	new_node->next = (*head);

	/* Move the head to point to the new node */
	(*head) = new_node;

	return (*head);
}
