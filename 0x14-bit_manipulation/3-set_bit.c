#include "main.h"

/**
 * set_bit - Sets the bit at a given index to 1.
 * @n: Pointer to the number to modify.
 * @index: Index of the bit to set to 1.
 *
 * Return: 1 on success, 0 on failure.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	const unsigned int MAX_BIT_INDEX = (sizeof(unsigned long int) * 8) - 1;

	if (index > MAX_BIT_INDEX)
		return (0);

	*n |= (1UL << index);

	return (1);
}
