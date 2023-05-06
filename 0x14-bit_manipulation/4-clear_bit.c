#include "main.h"

/**
 * clear_bit - Set the value of the bit at the specufied index to 0.
 * @n: Pointer to the number to change.
 * @index: Index of the bit to clear (0 is the least significant bit)
 *
 * Return: 1 for success, -1 if the inde
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
