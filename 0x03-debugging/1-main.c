#include <stdio.h>

/**
 * main - Cause an infinite loop
 * Return: 0
 */

int main(void)
{
	int i;

	printf("infinite loop incoming :(\n");

	i = 0;

	while (i < 10)
	{
		putcher(i);
	}

	printf("infinite loop avoided! \\0/\n");

	return (0);
}
