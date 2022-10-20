#include "lists.h"

/**
 * free_list- frees list_t
 * @head: adresss of start-node
 * Return: nothing
 */







void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
