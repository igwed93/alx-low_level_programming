#include "lists.h"

/**
 * print_list - function that prints a singly linked list
 * @h: pointer to the head of a list
 *
 * Return: returns the amount of members printed
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		n++;
		h = h->next;
	}
	return (n);
}
