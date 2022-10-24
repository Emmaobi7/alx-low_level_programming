#include "lists.h"

/**
 * free_listint2- frees listsint_t
 * @head: address of start node
 * Return: nothing
 */







void free_listint2(listint_t **head)
{
	listint_t *f = *head;
	listint_t *tmp;

	while (f)
	{
		tmp = f->next;
		free(f);
		f = tmp;
	}
	*head = NULL;
}
