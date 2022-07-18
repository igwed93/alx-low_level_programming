#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning
 * of a listint_t list
 * @head: pointer to the head pointer of the link
 * @n: integer member of struct listint_t
 *
 * Return: address of the new element or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	/* allocate node */
	listint_t *new = (listint_t *)malloc(sizeof(listint_t));

	/* verify that malloc did not fail */
	if (new == NULL)
	{
		return (NULL);
	}

	/* assign the data or member of the node */
	new->n = n;

	/* make next of new node as head */
	new->next = (*head);

	/* mover the head to point to the new node */
	(*head) = new;

	return (*head);
}
