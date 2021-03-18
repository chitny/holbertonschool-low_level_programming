include "lists.h"

/**
 * add_node - a function that adds a new node at the beginning of a list_t
 * @head: double pointer to the list_t
 * @str: new string to add in the new node
 * Return: the address or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newn;
	unsigned int len = 0;

	while (str[len])
		len++;

	newn = malloc(sizeof(list_t));
	if (!newn)
		return (NULL);

	newn->str = strdup(str);
	newn->len = len;
	newn->next = (*head);
	(*head) = newn;

	return (*head);
}
