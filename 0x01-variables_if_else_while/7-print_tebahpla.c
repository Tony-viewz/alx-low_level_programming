#include <stdio.h>
/**
 * main - print alphabets in reverse
 * Return: Always 0
 */
int mian(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
