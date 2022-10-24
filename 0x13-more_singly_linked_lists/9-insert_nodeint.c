#include "lists.h"

/**
 * insert_nodeint_at_index- inserts new node at..
 * @head: address of new node
 * @idx: index to insert node
 * @n: data at address
 */







listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *ptr;
	unsigned int itr;

	ptr = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}

	for (itr = 0; itr < (idx - 1); itr++)
	{
		if (ptr == NULL || ptr->next == NULL)
			return (NULL);
		ptr = ptr->next;
	}
	new->next = ptr->next;
	ptr->next = new;

	return (new);
}

