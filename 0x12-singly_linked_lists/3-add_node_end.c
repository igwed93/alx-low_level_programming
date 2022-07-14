#include "lists.h"

/**
 * add_node_end - function that adds a node to the end of
 * of a linked list.
 * @head: pointer to the end of the linked list
 * @str: value of new node.
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	/* allocate node */
	list_t *new = malloc(sizeof(list_t));
	list_t *temp = *head; /*create a temp last node of current list */

	/* verify that malloc didn't fail */
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	/* If the linked list is empty then, make the new node as head */
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	/*change the next of temp last node */
	temp->next = new;
	return (new);
}
