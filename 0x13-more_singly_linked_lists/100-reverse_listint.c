#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to the first node
 * Return: pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *rev = NULL;
	listint_t *prox = NULL;

	while (*head)
	{
		prox = (*head)->prox;
		(*head)->prox = rev;
		rev = *head;
		*head = prox;
	}

	*head = rev;

	return (*head);
}
