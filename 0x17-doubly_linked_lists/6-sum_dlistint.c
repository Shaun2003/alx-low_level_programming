#include "lists.h"

/**
 * sum_dlistint - return the sum of all
 * data (n) of dlistint_t linked list
 * @head: double pointer to head of list
 *
 * Return: return 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{

	int sum = 0;
	dlistint_t *i;

	for (i = head; i != NULL; i = i->next)
	{
		sum += i->n;
	}

	return (sum);
}
