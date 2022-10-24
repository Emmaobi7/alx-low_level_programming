#include "lists.h"

/**
 * free_listint2- frees listsint_t
 * @h: address of start node
 * Return: nothing
 */







void free_listint2(listint_t **head)
{
	listint_t *f = *head;

	while (f)
	{
		free(f);
		f = f->next;
	}
	*head = NULL;
}
