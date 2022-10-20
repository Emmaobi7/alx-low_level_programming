#include "lists.h"

/**
 * add_node_end- adds node to end of list
 * @head: adress to start-node
 * @str: string to store in list
 * Return: address on success
 */







list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *last = *head;
	unsigned int len;
	char *p;

	len = 0;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	while (str[len])
	{
		len++;
	}
	p = strdup(str);
	if (p == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new;
	}
	return (new);
}
