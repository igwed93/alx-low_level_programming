#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: pointer to the header of linked list to be printed
 *
 * Return: number of nodes in the linked list.
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->n == 0)
			printf("[0] (nil)\n");
		else
			printf("%u\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
