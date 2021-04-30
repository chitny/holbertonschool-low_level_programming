#include "lists.h"

/**
 * dlistint_len - a function that prints the number of the elements.
 * @h: pointer to the dlistint_t
 *
 * Return: the number of nodes.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;

	if (!h)
		return (0);

	while (h)
	{
		h = h->next;
		size++;
	}

	return (size);

}
