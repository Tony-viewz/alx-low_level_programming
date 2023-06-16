#include "lists.h"

/**
 * dlistint_len - return numbers of an elements in double linked list
 * @h: head of list
 *
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}

	return (num);
}
