#include "lists.h"

/**
 * insert_node - function that inserts a node into a
 * specific index of a list.
 * @tmp: ptr to nth position node in doubly linked list.
 * @n: data of the new node
 *
 * Return: the address of the new node.
 */
dlistint_t *insert_node(dlistint_t *tmp, int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;

	new->next = tmp;
	new->prev = tmp->prev;
	tmp->prev->next = new;
	tmp->prev = new;

	return (new);
}


/**
 * insert_dnodeint_at_index - function that inserts
 * a new node at a given position.
 *
 * @h: pointer to the pointer of the first node of the list
 * @idx: index at which to insert the new node
 * @n: n member of the new node.
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	if (*h == NULL)
		return (NULL);

	tmp = *h;
	while ((idx != 0) && (tmp->next))
	{
		idx -= 1;
		tmp = tmp->next;
		if (idx == 0)
			return (insert_node(tmp, n));
	}

	if (idx == 1)
		return (add_dnodeint_end(h, n));
	return (NULL);
}
