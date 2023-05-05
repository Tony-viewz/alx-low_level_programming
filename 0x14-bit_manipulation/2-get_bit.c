#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index in a decimal number.
 * @n: The decimal number to search.
 * @index: The index of thr bit to check.
 *
 * Return: The value of thr bit at the given index, or -1 if for an error.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	return ((n >> index) & 1);
}
