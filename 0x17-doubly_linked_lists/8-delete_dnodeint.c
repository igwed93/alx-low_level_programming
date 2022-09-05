#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes
 * the node at index index of a dlistint_t linked list.
 *
 * @head: pointer to the pointer of the first node of list.
 * @index: index of node to delete.
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;

	if (!*head)
		return (-1);

	tmp = *head;

	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		if (*head != NULL)
			(*head)->prev = NULL;
		return (1);
	}

	while ((index != 0) && (tmp->next != NULL))
	{
		index--;
		tmp = tmp->next;
	}

	if (index == 0)
	{
		tmp->prev->next = tmp->next;
		if (tmp->next != NULL)
			tmp->next->prev = tmp->prev;
		free(tmp);
		return (1);
	}

	return (-1);
}
