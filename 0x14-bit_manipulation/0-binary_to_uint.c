#include "main.h"

/**
 * binary_to_unit - Function that converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int viewz = 0;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		viewz = 2 * viewz + (b[i] - '0');
	}

	return (viewz);
}
