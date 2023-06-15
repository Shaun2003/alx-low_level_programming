#include "lists.h"

/**
 * dlistint_len - return num of elements in linked dlistint_t list
 * @h: pointer to head of list
 *
 * Return: num of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int counter = 0;

	if (h == NULL)
		return (counter);

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}
