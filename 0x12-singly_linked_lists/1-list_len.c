#include "lists.h"

/**
 * list_len - a function that returns the number of elements in a linked list_t.
 * @h: pointer to the list_t list
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t nod = 0;

	while (h)
	{
		nod++;
		h = h->next;
	}
	return (nod);
}
