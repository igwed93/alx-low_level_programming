#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
 * of a listint_t linked list
 * @head: pointer to the head node
 * @index: index of the node to be returned
 *
 * Return: the data of the nth node or NULL if it doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp;

	if (head == NULL && index > 0)
	{
		return (NULL);
	}

	temp = head;
	while (head && i < index)
	{
		temp = temp->next;
		i++;
	}

	head = temp;
	return (head);
}
