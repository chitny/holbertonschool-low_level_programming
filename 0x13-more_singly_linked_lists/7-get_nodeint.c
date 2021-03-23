#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t
 * @head: first node in listint_t
 * @index: index of the node
 * Return: pointer to the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp = head;

	while (tmp && i < index)
	{
		tmp = temp->next;
		i++;
	}

	return (tmp ? tmp : NULL);
}
