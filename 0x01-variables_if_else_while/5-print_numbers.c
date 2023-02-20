#include <stdio.h>

/**
 * main - A program that prints all numbers of base 10 starting from 0
 * Return: always 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		printf("%d", n);

	printf("\n");

	return (0);
}
