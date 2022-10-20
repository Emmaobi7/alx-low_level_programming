#include "lists.h"

/**
 * free_list- frees list_t
 * @head: adresss of start-node
 * Return: nothing
 */







void free_list(list_t *head)
{
	if (head != NULL)
	{
		while (head)
		{
			free(head);
			head = head->next;
		}
	}
}
