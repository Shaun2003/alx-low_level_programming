#include "lists.h"

/**
 * get_dnodeint_at_index - return node of dlistint_t linked list
 * @head: double pointer to head of list
 * @index: index node to return
 *
 * Return: if node do not exist, return NULL
 * where index is index of node begining from 0
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	current = head;
	i = 0;
	while (current != NULL)
	{
		if (i == index)
			return (current);
		current = current->next;
		i++;
	}
	return (NULL);
}
