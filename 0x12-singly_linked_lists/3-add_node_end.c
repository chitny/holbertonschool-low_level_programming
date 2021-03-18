#include "lists.h"

/**
 * add_node_end - a function that adds a new node at the end of a list_t list.
 * @head: double pointer to the list_t
 * @str: string to the node
 * Return: address of the new node or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newn;
	list_t *t = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	newn = malloc(sizeof(list_t));
	if (!newn)
		return (NULL);

	newn->str = strdup(str);
	newn->len = len;
	newn->next = NULL;

	if (*head == NULL)
	{
		*head = newn;
		return (newn);
	}

	while (t->next)
		t = t->next;

	t->next = newn;

	return (newn);
}
