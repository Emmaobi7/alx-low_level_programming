#include "lists.h"

/**
 * free_listint- frees a listint_t list
 * @head: start node
 * Return: nothing
 */







void free_listint(listint_t *head)
{

	while (head)
	{
		free(head);
		head = head->next;
	}
}

