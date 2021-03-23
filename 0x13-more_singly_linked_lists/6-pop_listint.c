#include "lists.h"

/**
 * pop_listint - deletes the head node and return nodes data
 * @head: pointer to the first element in listint_t
 * Return: return nodes data
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (num);
}
