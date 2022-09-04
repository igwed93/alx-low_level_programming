#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements
 * in a linked dlistint_t list.
 *
 * @h: pointer to the first element/node of the list.
 *
 * Return: number of elements in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t elm = 1;
	const dlistint_t *tmp = h;

	while (tmp->next != NULL)
	{
		elm++;
		tmp = tmp->next;
	}

	return (elm);
}
