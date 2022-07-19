#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node to the end of a
 * linked list.
 * @head: pointer that points to the pointer to the head of the list
 * @n: member of the new node to be appended
 *
 * Return: the address of the new element of NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* allocate node in memory */
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *temp = *head; /*create a temp last node of current list */

	/* verify that malloc did not fail */
	if (new_node == NULL)
		return (NULL);

	/* assign member to new node */
	new_node->n = n;

	/* assign next pointer of new node to null */
	new_node->next = NULL;

	/* If the linked list is empty then make the new node as head */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/* iterate to the last node of the list */
	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	/* chsng the next of temp last node */
	temp->next = new_node;
	return (new_node);
}
