#include "lists.h"

/**
 * add_nodeint- adds a new node at start of list
 * @head: adress of first node
 * @n: data at
 * Return: adress on sucess
 */






listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
