#include "main.h"

/**
 * print_binary - print the binary representation of an unsignrd long integer.
 * @n: the number to print in binary format
 */
void print_binary(unsigned long int n)
{
	int i;
	int flag = 0;
	const int BITS_IN_ULONG = sizeof(unsigned long int) * 8;

	for (i = BITS_IN_ULONG - 1; i >= 0; i--)
	{
		if (n >> i & 1)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag)
			_putchar('0');
	}
	if (!flag)
		_putchar('0');
}
