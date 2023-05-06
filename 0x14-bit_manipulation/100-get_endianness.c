#include "main.h"

/**
 * get_endianness - Checks the endianness of the machine.
 * This function determines the endianness of the machine by creating a
 * unsigned integer with value 1 and checking the value of its first byte.
 * Return: If the machine is big endian, the function returns 0. If the
 * machine is little endian, the function returns 1.
*/
int get_endianness(void)
{
	unsigned int i = 1;

	char *c = (char *) &i;

	if (*c)
		return (1);
	else
		return (0);
}
