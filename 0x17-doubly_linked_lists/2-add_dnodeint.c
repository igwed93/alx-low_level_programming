#include "lists.h"

/**
 * add_dnodeint - function that adds a node at
 * at the beginning of a dlistint_t list.
 *
 * @head: pointer to the pointer of the first node.
 * @n: element to append in new node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	/* check if malloc failed */
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
		new->prev = NULL;
		return (new);
	}

	new->next = *head;
	new->prev = NULL;
	(*head)->prev = new;
	*head = new;

	return (new);
}

