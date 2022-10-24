#include "lists.h"

/**
 * pop_listint- deletes head node
 * @head: address of start node
 * Return: data
 */







int pop_listint(listint_t **head)
{
	listint_t *p = *head;
	int n;

	if (*head == NULL)
		return (0);

	n = p->n;
	*head = p->next;
	free(p);
	return (n);
}


