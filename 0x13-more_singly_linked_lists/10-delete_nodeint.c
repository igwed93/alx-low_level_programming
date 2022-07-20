#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index index
 * @head: pointer to the pointer of the head node
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *end;
	unsigned int j;

	/* if linked list is empty */
	if (*head == NULL)
		return (-1);

	/* If head needs to be deleted */
	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}

	/* find previous node of the node to be deleted */
	for (j = 0; tmp != NULL && j < index - 1; j++)
	{
		tmp = tmp->next;
	}

	/* if index is more than number of nodes */
	if (tmp == NULL || tmp->next == NULL)
	{
		return (-1);
	}
	end = tmp->next->next;
	free(tmp->next); /* unlink the node from the list and free memory */
	tmp->next = end;
	return (1);
}
