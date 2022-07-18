#include "lists.h"

/**
 * listint_len - function that returns the number of elements
 * in a linked listint_t list
 * @h: pointer to the header of linked list
 *
 * Return: the number of elements or nodes in a linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num += 1;
		h = h->next;
	}
	return (num);
}
