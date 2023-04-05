#include "lists.h"

/**
 * get_nodeint_at_index - the nth node of the listint_t linked list.
 *
 * @head: pointer of the first node
 * @index: where index is the index of the node, starting 0
 *
 * Return: pointer of the indx
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
