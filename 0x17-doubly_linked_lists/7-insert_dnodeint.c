#include "lists.h"

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
	dlistint_t *new, *tmp, *end;
	unsigned int i, length;

	new = malloc(sizeof(dlistint_t));
	/* check if malloc failed */
	if (new == NULL)
		return (NULL);

	new->n = n;
	tmp = *h;
	end = *h;

	for (length = 0; end != NULL; length++)
		end = end->next;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	else if (idx > 0 && idx < length)
	{
		for (i = 0; i < idx - 1; i++)
		{
			tmp = tmp->next;
		}

		new->next = tmp->next;
		tmp->next = new;
		new->prev = tmp;
		tmp = new;
		return (new);
	}
	else
		return (NULL);
}
