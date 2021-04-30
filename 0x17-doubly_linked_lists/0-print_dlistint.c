#include "lists.h"

/**
 * print_dlistint - a function that prints all the elements.
 * @h: pointer to the dlistint_t
 *
 * Return: the number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{

	size_t size = 0;

	if (!h)
		return (0);

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		size++;
	}

	return (size);

}
