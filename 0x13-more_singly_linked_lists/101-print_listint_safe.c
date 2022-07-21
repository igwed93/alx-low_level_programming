#include "lists.h"

/**
 * print_listint_safe - function that prints a linked list
 * @head: pointer to the head node
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;

	if (head == NULL)
		exit(98);

	while (head)
	{
		printf("[%p] %d\n", (void *) &head, head->n);
		num++;
		head = head->next;
	}
	return (num);
}
