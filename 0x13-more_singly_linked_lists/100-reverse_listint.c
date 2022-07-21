#include "lists.h"

/**
 * reverse_listint - function that reverses a list
 * @head: pointer to the pointer of the head node
 *
 * Return: reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *last = NULL; /* create an empty node */
	listint_t *next = NULL;

	while (*head != NULL)
	{
		/* Store next */
		next = (*head)->next;

		/* Reverse current node's pointer */
		(*head)->next = last;

		/* Move pointers one position ahead */
		last = *head;
		*head = next;
	}
	*head = last;

	return (*head);
}
