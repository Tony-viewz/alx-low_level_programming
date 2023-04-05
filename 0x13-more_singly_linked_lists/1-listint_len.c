#include "lists.h"

/**
 * listint_t - print number of element in the linked listint_t list.
 *
 * @h: head pointer
 *
 * Return: the number of elements
 *
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
