#include "lists.h"

/**
 * print dlistint_t - print all the elements of a dlistint_t
 *
 * @h: head of a list
 * Return: The number of the nodes
 */

size_t print_dlistint(const dlistint_t *h) {
    size_t count = 0;
    
    while (h != NULL) {
        printf("%d\n", h->n);
        h = h->next;
        count++;
    }
    
    return count;
}
