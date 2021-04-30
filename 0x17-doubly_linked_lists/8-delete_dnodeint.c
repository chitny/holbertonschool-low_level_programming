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

/**
 * delete_dnodeint_at_index - deltes a node in a doubly linked list
 * @head: double pointer to the the linked list
 * @index: index of the node that should be deleted
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int i = 0;

	if (*head == NULL || dlistint_len(tmp) < index + 1)
		return (-1);

	if (!index)
	{
		(*head) = tmp->next;
		if (tmp->next)
			tmp->next->prev = NULL;
		tmp->next = NULL;
		free(tmp);
		return (1);
	}

	while (i < index)
	{
		tmp = tmp->next;
		i++;
	}

	tmp->prev->next = tmp->next;
	if (tmp->next)
		tmp->next->prev = tmp->prev;
	free(tmp);

	return (1);
}
