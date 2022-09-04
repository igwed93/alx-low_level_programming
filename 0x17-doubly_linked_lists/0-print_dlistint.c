#include "lists.h"

/**
 * print_dlistint - function that prints all
 * elements of a dlistint_t list.
 *
 * @h: pointer to the head node of the list.
 *
 * Return: number of nodes on success.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;
	const dlistint_t *tmp = h;

	if (h == NULL)
		return (0);
	for (i = 1; tmp->next != NULL; i++)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
	printf("%d\n", tmp->n);


	return (i);
}
