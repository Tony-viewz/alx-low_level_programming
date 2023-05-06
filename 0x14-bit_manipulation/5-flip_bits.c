#include "main.h"

/**
 * flip_bits - Counts the number of bits that need to be flipped to convert
 * one unsigned long integer to another.
 * @n: The first unsigned long integer.
 * @m: The second unsigned long integer.
 * Return: The number of bits that need to be flipped to convert n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int exclusive = n ^ m;
	unsigned int flip  = 0;

	while (exclusive)
	{
		flip += exclusive & 1;
		exclusive >>= 1;
	}

	return (flip);
}
