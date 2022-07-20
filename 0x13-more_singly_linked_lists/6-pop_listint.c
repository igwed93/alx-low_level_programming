#include "lists.h"

/**
 * pop_listint - function that deletes the node of a listint_t
 * linked list
 * @head: pointer to the pointer of the head node
 *
 * Return: the head node's data or zero if it is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (*head == NULL)
	{
		return (0);
	}

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (num);
}

