#include "lists.h"

/**
 * add_nodeint_end- adds new node at end of list
 * @head: address of start node
 * @n: data at address
 * Return: address on success
 */






listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_end;
	listint_t *last = *head;

	new_end = malloc(sizeof(listint_t));
	if (new_end == NULL)
		return (NULL);
	new_end->n = n;
	new_end->next = NULL;
	if (*head == NULL)
	{
		*head = new_end;
	}
	else
	{
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new_end;
	}
	return (new_end);
}

