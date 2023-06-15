#include "lists.h"

/**
 * print_dlistint - print all the elements of dlistint_t list
 * @h: pointer to head of list
 *
 * Return: num of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{

	int counter = 0;

	if (h == NULL)
		return (counter);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}

	return (counter);
}
