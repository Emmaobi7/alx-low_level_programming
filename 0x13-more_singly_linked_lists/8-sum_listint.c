#include "lists.h"

/**
 * sum_listint- sums all data in linked list
 * @head: start node
 * Return: sum
 */








int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head)
	{
		if (head == NULL)
			return (0);
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

