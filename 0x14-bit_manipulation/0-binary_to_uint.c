#include "main.h"

/**
 * binary_to_unit - This function converts a binary number to an unsigned int.
 * @b: A string containing the binary number to be converted.
 * Return: The converted unsigned integer value.
 */
unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int decimal_value = 0;

	if (!b)
		return (0);

	for (x = 0; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		decimal_value = (decimal_value * 2) + (b[x] - '0');
	}

	return (decimal_value);
}
