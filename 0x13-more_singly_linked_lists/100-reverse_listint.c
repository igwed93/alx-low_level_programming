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
	listint_t *current = *head;
	listint_t *next = NULL;

	while (current != NULL)
	{
		/* Store next */
		next = current->next;

		/* Reverse current node's pointer */
		current->next = last;

		/* Move pointers one position ahead */
		last = current;
		current = next;
	}
	*head = last;

	return (*head);
}
