#include "lists.h"

/**
 * print_listint- prints all element of listint_t
 * @h: pointer to first node
 * Return: number of nodes
 */







size_t print_listint(const listint_t *h)
{
	size_t N_node;

	N_node = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		N_node++;
	}

	return (N_node);
}
