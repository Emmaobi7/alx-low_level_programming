#include "lists.h"

/**
 * add_node- adds new node to start of list
 * @head: start node
 * @str: pointer to sring
 * Return: address on sucess
 */





list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len;

	len = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	while (str[len])
	{
		len++;
	}

	new->str = strdup(str);
	new->len = len;
	new->next = *head;

	*head = new;
	return (new);


}

