#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth
 * node of a dlistint_t linked list.
 *
 * @head: pointer to the first node of the list.
 * @index: index of the node to return.
 *
 * Return: the node at index, else NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *tmp;

	if (head == NULL)
		return (NULL);

	tmp = head;
	/* obtain the number of nodes in list */
	for (i = 0; tmp != NULL; i++)
		tmp = tmp->next;

	/* return null if index is out of range */
	if (index > i)
		return (NULL);

	tmp = head;
	while (index && tmp != NULL)
	{
		tmp = tmp->next;
		index--;
	}

	return (tmp);
}
