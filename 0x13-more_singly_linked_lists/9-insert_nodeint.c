#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts
 * a new node at a given location;
 * @head: pointer to the pointer of the first node
 * @idx: index where the new node is to be added
 * @n: integer data or member of the new node
 *
 * Return: the address of the new node or NULL
 * if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	/* allocate node */
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *temp = *head, *half;
	unsigned int i = 0;

	if (new == NULL)
		return (NULL);

	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	while (i < idx - 1)
	{
		if (temp->next == NULL)
			return (NULL);
		temp = temp->next;
		i++;
	}
	half = temp->next;
	temp->next = new;
	new->next = half;

	return (new);
}
